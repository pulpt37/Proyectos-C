import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';
import {BrowserAnimationsModule} from '@angular/platform-browser/animations';
import { ManuelHobbies } from './manuel_hobbies/manuel.hobbies';
import {MatInputModule} from '@angular/material/input';
import {Futbol} from './futbol/futbol.manuel';
import {
  MatCheckboxModule,
  MatMenuModule,
  MatButtonModule,
  MatIconModule,
  MatTabsModule,
  MatGridListModule,
  MatCardModule} from '@angular/material/';
import {Coding} from './coding/coding.manuel';
import { Music } from './music/music.manuel';
import {MatFormFieldModule} from '@angular/material/form-field';
import { FormsModule } from '@angular/forms';

@NgModule({
  declarations: [
    ManuelHobbies,
    Futbol,
    Coding,
    Music
  ],
  imports: [
    BrowserModule,
    FormsModule,
    MatFormFieldModule,
    BrowserAnimationsModule,
    MatInputModule,
    MatCheckboxModule,
    MatMenuModule,
    MatButtonModule,
    MatIconModule,
    MatTabsModule,
    MatCardModule,
    MatGridListModule
  ],
  providers: [],
  exports: [],
  bootstrap: [ManuelHobbies,Futbol,Music,Coding]
})
export class AppModule { }
