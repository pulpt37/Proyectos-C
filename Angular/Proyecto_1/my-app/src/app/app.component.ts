import { Component } from '@angular/core';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent {
  boton :string ='no me has presionado';
  title = 'FERNANDO';
  metodo(){
    this.title='Hola';
    this.boton='Presionado'
  }
}
