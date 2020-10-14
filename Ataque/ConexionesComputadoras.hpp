//
//  ConexionesComputadoras.hpp
//  Ataque
//
//  Created by Matías Méndez on 11/10/20.
//  Copyright © 2020 Matías Méndez. All rights reserved.
//

#ifndef ConexionesComputadoras_hpp
#define ConexionesComputadoras_hpp

#include <stdio.h>
#include <iostream>
#include "Administrador.hpp"
#include "/Users/matiasmendez/Desktop/PF/Listas_Enlazadas/Listas_Enlazadas/LinkedList.hpp"
#include "/Users/matiasmendez/Desktop/PF/Listas_Enlazadas/Stack/Stack/Stack.hpp"
#include "/Users/matiasmendez/Desktop/PF/Listas_Enlazadas/Queue/Queue/Queue.hpp"
#include "IP.hpp"

//no se si conexiones sea una herencia de la clase adminsitrador y con el mismo constructor o si deba ser otra dfierente 
class ConexionesComputadoras  {
private:
    vector<UserFila> registros;
    string fileName;
    
    Stack<UserFila> entrantes();
    Queue<UserFila> salientes();
    //1. Ip interna que se esta usando
    string IpBase = "10.152.206";
    string IpInternaNueva;
    
public:
   
    ConexionesComputadoras(vector<UserFila>, string);
    
    void generarIpInterna(string);
    void ultimaConexion();
    
    void countEntrantes();
    void countSalientes();
};



#endif /* ConexionesComputadoras_hpp */
