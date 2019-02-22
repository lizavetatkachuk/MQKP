/*
 * MQKPSolution.cpp
 *
 * File defining the methods of the class MQKPSolution.
 *
 * It is a part of the skeleton code provided for the MQKP, as a part of the module Metaheuristics of the
 * "Grado de Ingeniería Informática" of the University of Córdoba (Spain).
 *
 * @author Carlos García cgarcia@uco.es
 */

#include "MQKPSolution.h"
#include "MQKPInstance.h"

MQKPSolution::MQKPSolution(MQKPInstance &instance) {
	this->_sol= new int [instance._numObjs];
	for(int i=0;i<instance._numObjs;i++)
	{
		this->_sol[i]=0;
	}
	this->_numObjs=instance._numObjs;
	this->_fitness=0;
	//	TODO Complete initializing the properties. Initially, all the objects are out of any knapsack (=0)
}

MQKPSolution::~MQKPSolution() {
	delete []this->_sol;
	//TODO complete
}

void MQKPSolution::putObjectIn(int object, int knapsack){
	this->_sol[object]=knapsack;
	//TODO complete the function
}

int MQKPSolution::whereIsObject(int object){
	int knapsack= this->_sol[object];
	return knapsack;
	//TODO complete the function
}

