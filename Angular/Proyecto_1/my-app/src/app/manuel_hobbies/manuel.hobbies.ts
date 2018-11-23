import { Component, OnInit } from '@angular/core';
import { MatIconRegistry } from '@angular/material';
import { DomSanitizer } from '@angular/platform-browser';

export interface Student{
  nombre: string,
  edad:number,
  genero: string,
  
}

@Component({
  selector: 'manuel-hobbies',
  templateUrl: './manuel.hobbies.html',
  styleUrls: ['./manuel.hobbies.css']
})
export class ManuelHobbies {
  
  estudiante:Student={
    nombre:"fer",
    edad:15,
    genero:"Masculino"
  };

  // estudiantes:Student[]=[];
  
  numero:number=0;


  vector:Student[]=[];


  Fer(){
   console.log("Vector");
   if(this.vector.length>5){
    this.vector.splice(3,0,this.estudiante);
   }else{
    this.vector.push(this.estudiante);
   }
   

   console.log(this.vector);
   console.log(this.vector[0].nombre)
  }
}
