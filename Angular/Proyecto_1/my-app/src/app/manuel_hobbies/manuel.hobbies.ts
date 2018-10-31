import { Component } from '@angular/core';
import { MatIconRegistry } from '@angular/material';
import { DomSanitizer } from '@angular/platform-browser';

@Component({
  selector: 'manuel-hobbies',
  templateUrl: './manuel.hobbies.html',
  styleUrls: ['./manuel.hobbies.css']
})
export class ManuelHobbies {
 title="Fer";
 Nombre="Fernando";
 Alto="20%";
 Ancho="20%";
 estilo_boton:String="button";
 on:boolean=true;
 On(){
  if (this.on){
    this.on=false;
  }else{
    this.on=true;
  }
}

 
 Hola(){
   
   if(this.estilo_boton=="button"){
      this.estilo_boton="button2";
     console.log(this.estilo_boton);  
   }else{
       
       this.estilo_boton="button";
       console.log(this.estilo_boton);  
  }
 }
}
