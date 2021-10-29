void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(20, OUTPUT);
  pinMode(21, OUTPUT);
  pinMode(22, OUTPUT);

}

void switchoutput(int y, int frame [][9]);
void makeFrame ( int frame [][9]);



void loop() {
  // put your main code here, to run repeatedly:
  int circop [9][9] = {
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,0,1,0,0,0,0},
    {0,0,0,1,0,1,0,0,0},
    {0,0,1,0,0,0,1,0,0},
    {0,0,1,0,0,0,1,0,0},
    {0,0,1,1,1,1,1,0,0},
    {0,0,1,0,0,0,1,0,0},
    {0,0,1,0,0,0,1,0,0},
    
};
int B [9][9] = {
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0},
    {0,0,1,1,1,1,0,0,0},
    {0,0,1,0,0,0,1,0,0},
    {0,0,1,0,0,0,1,0,0},
    {0,0,1,1,1,1,0,0,0},
    {0,0,1,0,0,0,1,0,0},
    {0,0,1,0,0,0,1,0,0},
    {0,0,1,1,1,1,0,0,0},
    
};

int one [9][9] = {
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0},
};

int two [9][9] = {
    {0,0,0,0,0,0,0,0,0},
    {0,0,1,1,1,1,0,0,0},
    {0,1,0,0,0,1,0,0,0},
    {1,0,0,0,0,1,0,0,0},
    {0,0,0,0,1,0,0,0,0},
    {0,0,0,1,0,0,0,0,0},
    {0,0,1,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,0,0},
    {0,0,0,0,0,0,0,0,0},
    
};

int three [9][9] = {
    {0,0,0,0,0,0,0,0,0},
    {0,1,1,1,1,0,0,0,0},
    {0,0,0,0,0,1,0,0,0},
    {0,0,0,0,1,0,0,0,0},
    {0,0,1,1,1,1,0,0,0},
    {0,0,0,0,0,1,0,0,0},
    {0,1,1,1,1,1,0,0,0},
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0},
};

int four [9][9] = {
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0},
    {0,0,1,1,0,0,0,0,0},
    {0,1,0,1,0,0,0,0,0},
    {1,1,1,1,1,1,0,0,0},
    {0,0,0,1,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0},
    {0,0,0,1,0,0,0,0,0},
};

int five [9][9] = {
    {0,0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,0,0,0},
    {0,1,0,0,0,0,0,0,0},
    {0,1,1,1,1,0,0,0,0},
    {0,0,0,0,0,1,0,0,0},
    {0,0,0,0,0,1,0,0,0},
    {0,1,0,1,1,0,0,0,0},
    {0,0,1,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0},
};

int six [9][9] = {
    {0,0,0,1,0,0,0,0,0},
    {0,0,1,1,0,0,0,0,0},
    {0,0,1,0,0,0,0,0,0},
    {0,1,0,1,0,0,0,0,0},
    {0,1,1,0,1,0,0,0,0},
    {0,1,0,0,0,1,0,0,0},
    {0,1,0,0,1,1,0,0,0},
    {0,0,1,1,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0},
};

int seven [9][9] = {
    {0,0,0,0,0,0,0,0,0},
    {0,1,1,1,1,1,1,0,0},
    {0,0,0,0,0,0,1,0,0},
    {0,0,0,0,0,1,0,0,0},
    {0,0,0,0,1,0,0,0,0},
    {0,0,0,0,1,0,0,0,0},
    {0,0,0,1,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0},
};

int eight [9][9] = {
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,1,1,1,0,0,0},
    {0,0,1,0,0,1,0,0,0},
    {0,1,0,0,1,0,0,0,0},
    {0,0,1,1,1,0,0,0,0},
    {0,0,1,0,0,1,0,0,0},
    {0,0,1,0,0,1,0,0,0},
    {0,0,0,1,1,0,0,0,0},
    {0,0,0,0,0,0,0,0,0},
};

int nine [9][9] = {
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,0,1,1,0,0,0},
    {0,0,0,1,0,1,0,0,0},
    {0,0,1,0,0,1,0,0,0},
    {0,0,1,0,0,1,0,0,0},
    {0,0,0,1,1,1,0,0,0},
    {0,0,0,0,0,1,0,0,0},
    {0,0,0,0,0,1,0,0,0},
    {0,0,0,0,0,1,0,0,0},
};

int zero [9][9] = {
    {0,0,0,0,0,0,0,0,0},
    {0,0,0,0,1,1,0,0,0},
    {0,0,1,1,0,0,1,0,0},
    {0,0,1,0,0,0,1,0,0},
    {0,1,0,0,0,0,0,1,0},
    {0,1,0,0,0,0,1,0,0},
    {0,1,0,0,0,0,1,0,0},
    {0,0,1,0,0,0,1,0,0},
    {0,0,0,1,1,1,0,0,0},
};
  /*
  for (int i = 0; i < 20; i ++) {
    makeFrame ( circop);
  }
  
   for (int i = 0; i < 20; i ++) {
    makeFrame (B);
  }
  */
  for (int i = 0; i < 200; i ++) {
    makeFrame (zero);
  }

   for (int i = 0; i < 200; i ++) {
    makeFrame (one);
  }

   for (int i = 0; i < 200; i ++) {
    makeFrame (two);
  }

   for (int i = 0; i < 200; i ++) {
    makeFrame (three);
  }

   for (int i = 0; i < 200; i ++) {
    makeFrame (four);
  }

   for (int i = 0; i < 200; i ++) {
    makeFrame (five);
  }

   for (int i = 0; i < 200; i ++) {
    makeFrame (six);
  }

   for (int i = 0; i < 200; i ++) {
    makeFrame (seven);
  }

   for (int i = 0; i < 200; i ++) {
    makeFrame (eight);
  }

   for (int i = 0; i < 200; i ++) {
    makeFrame (nine);
  }




}

void makeFrame ( int frame [][9]) {
  for (int i = 0; i < 10; i++) {

  switch (i) {
    case 0:
      digitalWrite(14, LOW);   
      digitalWrite(15, HIGH);    
      digitalWrite(16, HIGH);    
      digitalWrite(17, HIGH);
      digitalWrite(18, HIGH);
      digitalWrite(19, HIGH);
      digitalWrite(20, HIGH);
      digitalWrite(21, HIGH);
      digitalWrite(22, HIGH); 
      switchoutput(i, frame);
      break;
    case 1:
      digitalWrite(14, HIGH);   
      digitalWrite(15, LOW);    
      digitalWrite(16, HIGH);    
      digitalWrite(17, HIGH);
      digitalWrite(18, HIGH);
      digitalWrite(19, HIGH);
      digitalWrite(20, HIGH);
      digitalWrite(21, HIGH);
      digitalWrite(22, HIGH); 
      switchoutput(i, frame);
      break;
    case 2:
      digitalWrite(14, HIGH);   
      digitalWrite(15, HIGH);    
      digitalWrite(16, LOW);    
      digitalWrite(17, HIGH);
      digitalWrite(18, HIGH);
      digitalWrite(19, HIGH);
      digitalWrite(20, HIGH);
      digitalWrite(21, HIGH);
      digitalWrite(22, HIGH); 
      switchoutput(i, frame);
      break;
    case 3:
      digitalWrite(14, HIGH);   
      digitalWrite(15, HIGH);    
      digitalWrite(16, HIGH);    
      digitalWrite(17, LOW);
      digitalWrite(18, HIGH);
      digitalWrite(19, HIGH);
      digitalWrite(20, HIGH);
      digitalWrite(21, HIGH);
      digitalWrite(22, HIGH); 
      switchoutput(i, frame);
      break;
    case 4:
      digitalWrite(14, HIGH);   
      digitalWrite(15, HIGH);    
      digitalWrite(16, HIGH);    
      digitalWrite(17, HIGH);
      digitalWrite(18, LOW);
      digitalWrite(19, HIGH);
      digitalWrite(20, HIGH);
      digitalWrite(21, HIGH);
      digitalWrite(22, HIGH); 
      switchoutput(i, frame);
      break;
    case 5:
      digitalWrite(14, HIGH);   
      digitalWrite(15, HIGH);    
      digitalWrite(16, HIGH);    
      digitalWrite(17, HIGH);
      digitalWrite(18, HIGH);
      digitalWrite(19, LOW);
      digitalWrite(20, HIGH);
      digitalWrite(21, HIGH);
      digitalWrite(22, HIGH); 
      switchoutput(i, frame);
      break;
    case 6:
      digitalWrite(14, HIGH);   
      digitalWrite(15, HIGH);    
      digitalWrite(16, HIGH);    
      digitalWrite(17, HIGH);
      digitalWrite(18, HIGH);
      digitalWrite(19, HIGH);
      digitalWrite(20, LOW);
      digitalWrite(21, HIGH);
      digitalWrite(22, HIGH); 
      switchoutput(i, frame);
      break;
    case 7:
      digitalWrite(14, HIGH);   
      digitalWrite(15, HIGH);    
      digitalWrite(16, HIGH);    
      digitalWrite(17, HIGH);
      digitalWrite(18, HIGH);
      digitalWrite(19, HIGH);
      digitalWrite(20, HIGH);
      digitalWrite(21, LOW);
      digitalWrite(22, HIGH); 
      switchoutput(i, frame);
      break;
    case 8:
      digitalWrite(14, HIGH);   
      digitalWrite(15, HIGH);    
      digitalWrite(16, HIGH);    
      digitalWrite(17, HIGH);
      digitalWrite(18, HIGH);
      digitalWrite(19, HIGH);
      digitalWrite(20, HIGH);
      digitalWrite(21, HIGH);
      digitalWrite(22, LOW); 
      switchoutput(i, frame);
      break;

  }
  
}
}


void switchoutput(int y, int frame [][9]) {
  for (int i = 0; i < 9; i++) {
    switch (i) {
      case 0:
        if (frame[y][i] == 1) {
          digitalWrite(2, HIGH);  
        }
        else {
          digitalWrite(2, LOW);  
        }
        digitalWrite(3, LOW);    
        digitalWrite(4, LOW);    
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);    
        break;              
     case 1:
        digitalWrite(2, LOW); 
        if (frame[y][i] == 1) {
          digitalWrite(3, HIGH);
        }  
        else {
          digitalWrite(3, LOW);    
        }
        digitalWrite(4, LOW);    
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);    
        break;                

      case 2:
        digitalWrite(2, LOW);   
        digitalWrite(3, LOW); 
        if (frame[y][i] == 1) {
          digitalWrite(4, HIGH); 
        }   
        else {
            digitalWrite(4, LOW);  
        }
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);    
        break;                      

     case 3:
        digitalWrite(2, LOW);   
        digitalWrite(3, LOW);    
        digitalWrite(4, LOW);    
        if (frame[y][i] == 1) {
          digitalWrite(5, HIGH);
        }
        else {
          digitalWrite(5, LOW);
        }
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);  
        break;  

     case 4:
        digitalWrite(2, LOW);   
        digitalWrite(3, LOW);    
        digitalWrite(4, LOW);    
        digitalWrite(5, LOW);
        if (frame[y][i] == 1) {
          digitalWrite(6, HIGH);
        }
        else {
          digitalWrite(6, LOW);
        }
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        break;    
                        
     case 5:
        digitalWrite(2, LOW);   
        digitalWrite(3, LOW);    
        digitalWrite(4, LOW);    
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        if (frame[y][i] == 1) {
          digitalWrite(7, HIGH);
        } 
        else {
          digitalWrite(7, LOW);
        }
        digitalWrite(8, LOW);
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        break;    
                       
     case 6:
        digitalWrite(2, LOW);   
        digitalWrite(3, LOW);    
        digitalWrite(4, LOW);    
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        if (frame[y][i] == 1) {
          digitalWrite(8, HIGH);
        } 
        else {
          digitalWrite(8, LOW);
        }
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);    
        break;                      

     case 7:
        digitalWrite(2, LOW);   
        digitalWrite(3, LOW);    
        digitalWrite(4, LOW);    
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
        if (frame[y][i] == 1) {
          digitalWrite(9, HIGH);
        }
        else {
          digitalWrite(9, LOW);
        }
        digitalWrite(10, LOW); 
        break;   
                       
    case 8:
        digitalWrite(2, LOW);   
        digitalWrite(3, LOW);    
        digitalWrite(4, LOW);    
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
        digitalWrite(9, LOW);
        if (frame[y][i] == 1) {
          digitalWrite(10, HIGH);
        }
        else {
          digitalWrite(10, LOW);
        }
        
        break;
                         
  
    }
    delayMicroseconds(50); 
  }
}
