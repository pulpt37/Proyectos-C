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


  vector:boolean[]=[];
  vector_numeros:number[]=[5,6,6,12,-2];


  Fer(){
    let aux;
    for(let i=0;i<this.vector_numeros.length;i++){
      console.log("El vector vale: " +this.vector_numeros[i]);
      aux=this.vector_numeros[i];
      console.log("El auxiliar vale: " +aux);
      console.log("El vector numeros en su posicion " + aux +  " Vale: " + this.vector[aux]);
      
      if(this.vector[aux]==true){
        console.log("Hay repetidos");
        console.log("Vueltas: " + (i+1));
        break;
      }else{
        this.vector[aux]=true;
      }
    
      
      
    }
  }
}
