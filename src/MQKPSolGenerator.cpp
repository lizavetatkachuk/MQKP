/*
 * MQKPSolGenerator.cpp
 *
 * File defining the methods of the class MQKPSolGenerator.
 *
 * It is a part of the skeleton code provided for the MQKP, as a part of the module Metaheuristics of the
 * "Grado de Ingeniería Informática" of the University of Córdoba (Spain).
 *
 * @author Carlos García cgarcia@uco.es
 */

#include "MQKPSolGenerator.h"
#include "MQKPInstance.h"
#include "MQKPSolution.h"

#include <time.h> //add for srand

void MQKPSolGenerator::genRandomSol(MQKPInstance &instance, MQKPSolution &solution){

	int numObjs = instance.getNumObjs();
	int numKnapsacks = instance.getNumKnapsacks();

	for (int i = 0; i < numObjs; i++){

		// srand(time(NULL)); //"true" random for rand
		int randomKnapsack = rand() % numKnapsacks;  //TODO Change to select one of the knapsacks
		solution.putObjectIn(i, randomKnapsack);
	}
}
