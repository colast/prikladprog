// 8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Department.h"
#include "Employee.h"
#include "idCard.h"



void main ()
{
	Department dptAdm;
	Department dptDev;

	Employee headDep, mainDev, dev, director, subDirector, mainAccountant;
	idCard headDep101, mainDev5016, devId5018, director201, subDirector201, mainAccountant202;

	dptDev.setName("Developers");
	dptAdm.setName("Administration");

	headDep101.setNumber(101);
	mainDev5016.setNumber(5016);
	devId5018.setNumber(5018);
	director201.setNumber(201);
	subDirector201.setNumber(5022);
	mainAccountant202.setNumber(5019);

	headDep.setName("Ivan Ivanovich Ivanov");;
	headDep.setPosition("HeadDepartment");
	headDep.setRoom(101);
	headDep.setidCard(&headDep101);
	headDep.setDepartment(&dptDev);
	dptDev.setHead(&headDep);

	mainDev.setName("Petrov Petr Petrovich");;
	mainDev.setPosition("MainDeveloper");
	mainDev.setRoom(102);
	mainDev.setidCard(&mainDev5016);
	mainDev.setDepartment(&dptDev);
	dptDev.setHead(&mainDev);

	dev.setName("Sidorov Sidor Sidorovich");
	dev.setPosition("Developer");
	dev.setRoom(102);
	dev.setidCard(&devId5018);
	dev.setDepartment(&dptDev);
	dptDev.setHead(&dev);

	director.setName("Mikhailov Mikhail Mikhailovich");
	director.setPosition("Director");
	director.setRoom(201);
	director.setidCard(&director201);
	director.setDepartment(&dptAdm);
	dptAdm.setHead(&director);

	subDirector.setName("Alexandrovna Alexandra Alexandrovna");
	subDirector.setPosition("SubDirector");
	subDirector.setRoom(201);
	subDirector.setidCard(&subDirector201);
	subDirector.setDepartment(&dptAdm);
	dptAdm.setHead(&subDirector);

	mainAccountant.setName("Evgenevna Evgenia Evgeneva");
	mainAccountant.setPosition("MainAccountant");
	mainAccountant.setRoom(202);
	mainAccountant.setidCard(&mainAccountant202);
	mainAccountant.setDepartment(&dptAdm);
	dptAdm.setHead(&mainAccountant);


	headDep.print();
	mainDev.print();
	dev.print();

	director.print();
	subDirector.print();
	mainAccountant.print();
}

