void fonction8 () {


  if ((touche_int >= 2) && (touche_int <= 11)) {
    rsaisie_int[compt_touche_int] = touche_int - 2;
    if (compt_touche_int == 0) nombre_saisi_int = rsaisie_int[0];
    if (compt_touche_int == 1) nombre_saisi_int = (rsaisie_int[0] * 10) + (rsaisie_int[1] * 1);
    if (compt_touche_int == 2) nombre_saisi_int = (rsaisie_int[0] * 100) + (rsaisie_int[1] * 10) + (rsaisie_int[2] * 1);
    if (compt_touche_int == 3) nombre_saisi_int = (rsaisie_int[0] * 1000) + (rsaisie_int[1] * 100) + (rsaisie_int[2] * 10) + (rsaisie_int[3] * 1);
    L = nombre_saisi_int;
  }// if 0 a 9

  if (touche_int == 15) {
    if (inc == 1) {
      if (compt_touche_int == 2) {
        rsaisie_int[2] = rsaisie_int[1];
        rsaisie_int[1] = rsaisie_int[0];
        rsaisie_int[0] = 0;
        compt_touche_int = 2;
      }
      if (compt_touche_int == 0) {
        rsaisie_int[2] = 2;
        rsaisie_int[1] = 0;
        rsaisie_int[0] = 0;
        compt_touche_int = 2;
        bu[6] = '.';
        bu[7] = ' ';
        bu[8] = ' ';
        bu[9] = ' ';
        bu[10] = '.';
        bu[11] = ' ';
        bu[12] = ' ';
        bu[13] = ' ';
        bu[14] = '.';
        bu[15] = ' ';
        bu[16] = ' ';
        bu[17] = ' ';
        bu[18] = ' ';
        t_40.setText(bu);
      }
      if (compt_touche_int == 1) {
        rsaisie_int[2] = rsaisie_int[0];
        rsaisie_int[1] = 0;
        rsaisie_int[0] = 0;
        compt_touche_int = 2;
      }

      if (compt_touche_int == 5) {
        rsaisie_int[5] = rsaisie_int[4];
        rsaisie_int[4] = rsaisie_int[3];
        rsaisie_int[3] = 0;
        compt_touche_int = 5;
      }
      if (compt_touche_int == 3) {
        rsaisie_int[5] = 0;
        rsaisie_int[4] = 0;
        rsaisie_int[3] = 0;
        compt_touche_int = 5;
      }
      if (compt_touche_int == 4) {
        rsaisie_int[5] = rsaisie_int[3];
        rsaisie_int[4] = 0;
        rsaisie_int[3] = 0;
        compt_touche_int = 5;
      }

      if (compt_touche_int == 8) {
        rsaisie_int[8] = rsaisie_int[7];
        rsaisie_int[7] = rsaisie_int[6];
        rsaisie_int[6] = 0;
        compt_touche_int = 8;
      }
      if (compt_touche_int == 6) {
        rsaisie_int[8] = 0;
        rsaisie_int[7] = 0;
        rsaisie_int[6] = 0;
        compt_touche_int = 8;
      }
      if (compt_touche_int == 7) {
        rsaisie_int[8] = rsaisie_int[6];
        rsaisie_int[7] = 0;
        rsaisie_int[6] = 0;
        compt_touche_int = 8;
      }

      if (compt_touche_int == 11) {
        rsaisie_int[11] = rsaisie_int[10];
        rsaisie_int[10] = rsaisie_int[9];
        rsaisie_int[9] = 0;
        compt_touche_int = 11;
      }
      if (compt_touche_int == 9) {
        rsaisie_int[11] = 1;
        rsaisie_int[10] = 0;
        rsaisie_int[9] = 0;
        compt_touche_int = 11;
      }
      if (compt_touche_int == 10) {
        rsaisie_int[11] = rsaisie_int[9];
        rsaisie_int[10] = 0;
        rsaisie_int[9] = 0;
        compt_touche_int = 11;
      }
    }
    if (inc == 2) {
      if (compt_touche_int == 2) {
        rsaisie_int[2] = rsaisie_int[1];
        rsaisie_int[1] = rsaisie_int[0];
        rsaisie_int[0] = 0;
        compt_touche_int = 2;
      }
      if (compt_touche_int == 0) {
        rsaisie_int[2] = 5;
        rsaisie_int[1] = 5;
        rsaisie_int[0] = 2;
        compt_touche_int = 2;
        bu[6] = '.';
        bu[7] = ' ';
        bu[8] = ' ';
        bu[9] = ' ';
        bu[10] = '.';
        bu[11] = ' ';
        bu[12] = ' ';
        bu[13] = ' ';
        bu[14] = '.';
        bu[15] = ' ';
        bu[16] = ' ';
        bu[17] = ' ';
        bu[18] = ' ';
        t_40.setText(bu);
      }
      if (compt_touche_int == 1) {
        rsaisie_int[2] = rsaisie_int[0];
        rsaisie_int[1] = 0;
        rsaisie_int[0] = 0;
        compt_touche_int = 2;
      }

      if (compt_touche_int == 5) {
        rsaisie_int[5] = rsaisie_int[4];
        rsaisie_int[4] = rsaisie_int[3];
        rsaisie_int[3] = 0;
        compt_touche_int = 5;
      }
      if (compt_touche_int == 3) {
        rsaisie_int[5] = 5;
        rsaisie_int[4] = 5;
        rsaisie_int[3] = 2;
        compt_touche_int = 5;
      }
      if (compt_touche_int == 4) {
        rsaisie_int[5] = rsaisie_int[3];
        rsaisie_int[4] = 0;
        rsaisie_int[3] = 0;
        compt_touche_int = 5;
      }

      if (compt_touche_int == 8) {
        rsaisie_int[8] = rsaisie_int[7];
        rsaisie_int[7] = rsaisie_int[6];
        rsaisie_int[6] = 0;
        compt_touche_int = 8;
      }
      if (compt_touche_int == 6) {
        rsaisie_int[8] = 5;
        rsaisie_int[7] = 5;
        rsaisie_int[6] = 2;
        compt_touche_int = 8;
      }
      if (compt_touche_int == 7) {
        rsaisie_int[8] = rsaisie_int[6];
        rsaisie_int[7] = 0;
        rsaisie_int[6] = 0;
        compt_touche_int = 8;
      }

      if (compt_touche_int == 11) {
        rsaisie_int[11] = rsaisie_int[10];
        rsaisie_int[10] = rsaisie_int[9];
        rsaisie_int[9] = 0;
        compt_touche_int = 11;
      }
      if (compt_touche_int == 9) {
        rsaisie_int[11] = 5;
        rsaisie_int[10] = 5;
        rsaisie_int[9] = 2;
        compt_touche_int = 11;
      }
      if (compt_touche_int == 10) {
        rsaisie_int[11] = rsaisie_int[9];
        rsaisie_int[10] = 0;
        rsaisie_int[9] = 0;
        compt_touche_int = 11;
      }
    }
  }// if 15

  if ((touche_int == 16) && (inc == 1 || inc == 2)) {
    nombre_saisi_int = 16;
    compt_touche_int = -1;
    rsaisie_int[0] = 0;
    rsaisie_int[1] = 0;
    rsaisie_int[2] = 0;
    rsaisie_int[3] = 0;
    rsaisie_int[4] = 0;
    rsaisie_int[5] = 0;
    rsaisie_int[6] = 0;
    rsaisie_int[7] = 0;
    rsaisie_int[8] = 0;
    rsaisie_int[9] = 0;
    rsaisie_int[10] = 0;
    rsaisie_int[11] = 0;

    bu[0] = 'I';
    bu[1] = 'P';
    bu[2] = ':';
    bu[3] = ' ';
    bu[4] = ' ';
    bu[5] = ' ';
    bu[6] = '.';
    bu[7] = ' ';
    bu[8] = ' ';
    bu[9] = ' ';
    bu[10] = '.';
    bu[11] = ' ';
    bu[12] = ' ';
    bu[13] = ' ';
    bu[14] = '.';
    bu[15] = ' ';
    bu[16] = ' ';
    bu[17] = ' ';
    bu[18] = ' ';
    t_40.setText(bu);

  }// if 16 inc 1 ou 2

#ifdef DEBUG

  Serial.print("rsaisie_int[0] = ");
  Serial.println(rsaisie_int[0]);
  Serial.print("rsaisie_int[1] = ");
  Serial.println(rsaisie_int[1]);
  Serial.print("rsaisie_int[2] = ");
  Serial.println(rsaisie_int[2]);
  Serial.print("rsaisie_int[3] = ");
  Serial.println(rsaisie_int[3]);
  Serial.print("rsaisie_int[4] = ");
  Serial.println(rsaisie_int[4]);
  Serial.print("rsaisie_int[5] = ");
  Serial.println(rsaisie_int[5]);
  Serial.print("rsaisie_int[6] = ");
  Serial.println(rsaisie_int[6]);
  Serial.print("rsaisie_int[7] = ");
  Serial.println(rsaisie_int[7]);
  Serial.print("rsaisie_int[8] = ");
  Serial.println(rsaisie_int[8]);
  Serial.print("rsaisie_int[9] = ");
  Serial.println(rsaisie_int[9]);
  Serial.print("rsaisie_int[10] = ");
  Serial.println(rsaisie_int[10]);
  Serial.print("rsaisie_int[11] = ");
  Serial.println(rsaisie_int[11]);
#endif

  /*
    // Port
    if (inc==0) {

    Serial.println("********inc==0**********");
    Serial.println("************************");
    Serial.print("compt_touche_int =");
    Serial.println(compt_touche_int);
    Serial.println("************************");
    Serial.println("************************");
    if (compt_touche_int == 0) {
        bu[0]='D';
        bu[1]='e';
        bu[2]='f';
        bu[3]='o';
        bu[4]=':';
        bu[5]='6';
        bu[6]='4';
        bu[7]='5';
        bu[8]='4';
        bu[9]=' ';
        bu[10]='=';
        bu[11]='>';
        bu[12]=' ';
        bu[13]=' ';
        bu[14]=' ';
        bu[15]=char(rsaisie_int[0]+48);
        bu[16]=' ';
        bu[17]=' ';
        bu[18]=' ';
    t_40.setText(bu);
    }
     if (compt_touche_int == 1) {
    bu[12]=' ';
    bu[13]=' ';
    bu[14]=char(rsaisie_int[0]+48);
    bu[15]=char(rsaisie_int[1]+48);
    t_40.setText(bu);
    }
     if (compt_touche_int == 2) {
    bu[12]=' ';
    bu[13]=char(rsaisie_int[0]+48);
    bu[14]=char(rsaisie_int[1]+48);
    bu[15]=char(rsaisie_int[2]+48);
    t_40.setText(bu);
    }
       if (compt_touche_int == 3) {
    bu[12]=char(rsaisie_int[0]+48);
    bu[13]=char(rsaisie_int[1]+48);
    bu[14]=char(rsaisie_int[2]+48);
    bu[15]=char(rsaisie_int[3]+48);
    t_40.setText(bu);
    }
    if (nombre_saisi_int>4) nombre_saisi_int=0;
    if (touche_int == 20) {
    ARTNET_PORT=L;

    if(SD.exists("LOC.TXT")) {
    SD.remove("LOC.TXT");
    }
     myFile = SD.open("LOC.TXT", FILE_WRITE);

    // if the file opened okay, write to it:
    if (myFile) {
     Serial.print("Writing to LOC.TXT...");
     myFile.println(ARTNET_PORT);
     // close the file:
     myFile.close();
     Serial.println("done.");
    } else {
     // if the file didn't open, print an error:
     Serial.println("error Writing LOC.TXT");
     t_0.setText("err Writ LOC.TXT");
    }

    // re-open the file for reading:
    myFile = SD.open("LOC.TXT");
    if (myFile) {
     Serial.println("LOC.TXT:");

     // read from the file until there's nothing else in it:
     while (myFile.available()) {
       Serial.write(myFile.read());
     }
     // close the file:
     myFile.close();
    } else {
     // if the file didn't open, print an error:
     Serial.println("error opening LOC.TXT");
     t_0.setText("err Open LOC.TXT");
    }

    rsaisie_int[0]=0;
    rsaisie_int[1]=0;
    rsaisie_int[2]=0;
    rsaisie_int[3]=0;
    bu[16]='*';
    t_40.setText(bu);
    Serial.print("LOC.TXT =");
    Serial.println(ARTNET_PORT);
    Serial.println("************************");
    fonction=200;
    compt_touche_int=0;
    UDP.stop();
    config_arnet();
    }
    }
  */

  // Ipr
  if (inc == 1) {
#ifdef DEBUG
    Serial.println("********inc==1**********");
    Serial.println("************************");
    Serial.print("compt_touche_int =");
    Serial.println(compt_touche_int);
    Serial.println("************************");
    Serial.println("************************");
#endif
    if (compt_touche_int == 0) {
      bu[0] = 'I';
      bu[1] = 'P';
      bu[2] = ':';
      bu[3] = ' ';
      bu[4] = ' ';
      bu[5] = char(rsaisie_int[0] + 48);
      bu[6] = '.';
      bu[7] = ' ';
      bu[8] = ' ';
      bu[9] = ' ';
      bu[10] = '.';
      bu[11] = ' ';
      bu[12] = ' ';
      bu[13] = ' ';
      bu[14] = '.';
      bu[15] = ' ';
      bu[16] = ' ';
      bu[17] = ' ';
      bu[18] = ' ';
      t_40.setText(bu);
    }
    if (compt_touche_int == 1) {
      bu[3] = ' ';
      bu[4] = char(rsaisie_int[0] + 48);
      bu[5] = char(rsaisie_int[1] + 48);
      t_40.setText(bu);
    }
    if (compt_touche_int == 2) {
      bu[3] = char(rsaisie_int[0] + 48);
      bu[4] = char(rsaisie_int[1] + 48);
      bu[5] = char(rsaisie_int[2] + 48);
      t_40.setText(bu);
    }
    if (compt_touche_int == 3) {
      bu[7] = ' ';
      bu[8] = ' ';
      bu[9] = char(rsaisie_int[3] + 48);
      t_40.setText(bu);
    }
    if (compt_touche_int == 4) {
      bu[7] = ' ';
      bu[8] = char(rsaisie_int[3] + 48);
      bu[9] = char(rsaisie_int[4] + 48);
      t_40.setText(bu);
    }
    if (compt_touche_int == 5) {
      bu[7] = char(rsaisie_int[3] + 48);
      bu[8] = char(rsaisie_int[4] + 48);
      bu[9] = char(rsaisie_int[5] + 48);
      t_40.setText(bu);
    }
    if (compt_touche_int == 6) {
      bu[11] = ' ';
      bu[12] = ' ';
      bu[13] = char(rsaisie_int[6] + 48);
      t_40.setText(bu);
    }
    if (compt_touche_int == 7) {
      bu[11] = ' ';
      bu[12] = char(rsaisie_int[6] + 48);
      bu[13] = char(rsaisie_int[7] + 48);
      t_40.setText(bu);
    }
    if (compt_touche_int == 8) {
      bu[11] = char(rsaisie_int[6] + 48);
      bu[12] = char(rsaisie_int[7] + 48);
      bu[13] = char(rsaisie_int[8] + 48);
      t_40.setText(bu);
    }
    if (compt_touche_int == 9) {
      bu[15] = ' ';
      bu[16] = ' ';
      bu[17] = char(rsaisie_int[9] + 48);
      t_40.setText(bu);
    }
    if (compt_touche_int == 10) {
      bu[15] = ' ';
      bu[16] = char(rsaisie_int[9] + 48);
      bu[17] = char(rsaisie_int[10] + 48);
      t_40.setText(bu);
    }
    if (compt_touche_int == 11) {
      bu[15] = char(rsaisie_int[9] + 48);
      bu[16] = char(rsaisie_int[10] + 48);
      bu[17] = char(rsaisie_int[11] + 48);
      t_40.setText(bu);
    }
    if (nombre_saisi_int > 12) nombre_saisi_int = 0;

    if (touche_int == 20) {

      ip[0] = ((rsaisie_int[0] * 100) + (rsaisie_int[1] * 10) + rsaisie_int[2]);
      ip[1] = ((rsaisie_int[3] * 100) + (rsaisie_int[4] * 10) + rsaisie_int[5]);
      ip[2] = ((rsaisie_int[6] * 100) + (rsaisie_int[7] * 10) + rsaisie_int[8]);
      ip[3] = ((rsaisie_int[9] * 100) + (rsaisie_int[10] * 10) + rsaisie_int[11]);

      EEPROM.write(50, ip[0]);
      EEPROM.write(51, ip[1]);
      EEPROM.write(52, ip[2]);
      EEPROM.write(53, ip[3]);
      EEPROM.commit();

      rsaisie_int[0] = 0;
      rsaisie_int[1] = 0;
      rsaisie_int[2] = 0;
      rsaisie_int[3] = 0;
      rsaisie_int[4] = 0;
      rsaisie_int[5] = 0;
      rsaisie_int[6] = 0;
      rsaisie_int[7] = 0;
      rsaisie_int[8] = 0;
      rsaisie_int[9] = 0;
      rsaisie_int[10] = 0;
      rsaisie_int[11] = 0;

      bu[18] = '*';
      t_40.setText(bu);
#ifdef DEBUG
      Serial.print("ip =");
      Serial.println("************************");
#endif
      fonction = 200;
      compt_touche_int = 0;
      UDP.stop();
      config_arnet();

    }
  }


  //Ips
  if (inc == 2) {
#ifdef DEBUG
    Serial.println("********inc==2**********");
    Serial.println("************************");
    Serial.print("compt_touche_int =");
    Serial.println(compt_touche_int);
    Serial.println("************************");
    Serial.println("************************");
#endif
    if (compt_touche_int == 0) {
      bu[0] = 'I';
      bu[1] = 'P';
      bu[2] = ':';
      bu[3] = ' ';
      bu[4] = ' ';
      bu[5] = char(rsaisie_int[0] + 48);
      bu[6] = '.';
      bu[7] = ' ';
      bu[8] = ' ';
      bu[9] = ' ';
      bu[10] = '.';
      bu[11] = ' ';
      bu[12] = ' ';
      bu[13] = ' ';
      bu[14] = '.';
      bu[15] = ' ';
      bu[16] = ' ';
      bu[17] = ' ';
      bu[18] = ' ';
      t_40.setText(bu);
    }
    if (compt_touche_int == 1) {
      bu[3] = ' ';
      bu[4] = char(rsaisie_int[0] + 48);
      bu[5] = char(rsaisie_int[1] + 48);
      t_40.setText(bu);
    }
    if (compt_touche_int == 2) {
      bu[3] = char(rsaisie_int[0] + 48);
      bu[4] = char(rsaisie_int[1] + 48);
      bu[5] = char(rsaisie_int[2] + 48);
      t_40.setText(bu);
    }
    if (compt_touche_int == 3) {
      bu[7] = ' ';
      bu[8] = ' ';
      bu[9] = char(rsaisie_int[3] + 48);
      t_40.setText(bu);
    }
    if (compt_touche_int == 4) {
      bu[7] = ' ';
      bu[8] = char(rsaisie_int[3] + 48);
      bu[9] = char(rsaisie_int[4] + 48);
      t_40.setText(bu);
    }
    if (compt_touche_int == 5) {
      bu[7] = char(rsaisie_int[3] + 48);
      bu[8] = char(rsaisie_int[4] + 48);
      bu[9] = char(rsaisie_int[5] + 48);
      t_40.setText(bu);
    }
    if (compt_touche_int == 6) {
      bu[11] = ' ';
      bu[12] = ' ';
      bu[13] = char(rsaisie_int[6] + 48);
      t_40.setText(bu);
    }
    if (compt_touche_int == 7) {
      bu[11] = ' ';
      bu[12] = char(rsaisie_int[6] + 48);
      bu[13] = char(rsaisie_int[7] + 48);
      t_40.setText(bu);
    }
    if (compt_touche_int == 8) {
      bu[11] = char(rsaisie_int[6] + 48);
      bu[12] = char(rsaisie_int[7] + 48);
      bu[13] = char(rsaisie_int[8] + 48);
      t_40.setText(bu);
    }
    if (compt_touche_int == 9) {
      bu[15] = ' ';
      bu[16] = ' ';
      bu[17] = char(rsaisie_int[9] + 48);
      t_40.setText(bu);
    }
    if (compt_touche_int == 10) {
      bu[15] = ' ';
      bu[16] = char(rsaisie_int[9] + 48);
      bu[17] = char(rsaisie_int[10] + 48);
      t_40.setText(bu);
    }
    if (compt_touche_int == 11) {
      bu[15] = char(rsaisie_int[9] + 48);
      bu[16] = char(rsaisie_int[10] + 48);
      bu[17] = char(rsaisie_int[11] + 48);
      t_40.setText(bu);
    }
    if (nombre_saisi_int > 12) nombre_saisi_int = 0;

    if (touche_int == 20) {
      broadcast[0] = ((rsaisie_int[0] * 100) + (rsaisie_int[1] * 10) + rsaisie_int[2]);
      broadcast[1] = ((rsaisie_int[3] * 100) + (rsaisie_int[4] * 10) + rsaisie_int[5]);
      broadcast[2] = ((rsaisie_int[6] * 100) + (rsaisie_int[7] * 10) + rsaisie_int[8]);
      broadcast[3] = ((rsaisie_int[9] * 100) + (rsaisie_int[10] * 10) + rsaisie_int[11]);

      EEPROM.write(54, broadcast[0]);
      EEPROM.write(55, broadcast[1]);
      EEPROM.write(56, broadcast[2]);
      EEPROM.write(57, broadcast[3]);
      EEPROM.commit();

      rsaisie_int[0] = 0;
      rsaisie_int[1] = 0;
      rsaisie_int[2] = 0;
      rsaisie_int[3] = 0;
      rsaisie_int[4] = 0;
      rsaisie_int[5] = 0;
      rsaisie_int[6] = 0;
      rsaisie_int[7] = 0;
      rsaisie_int[8] = 0;
      rsaisie_int[9] = 0;
      rsaisie_int[10] = 0;
      rsaisie_int[11] = 0;

      bu[18] = '*';
      t_40.setText(bu);
#ifdef DEBUG
      Serial.print("broadcast =");
      Serial.println( broadcast[0]);
      Serial.println( " . ");
      Serial.println( broadcast[1]);
      Serial.println( " . ");
      Serial.println( broadcast[2]);
      Serial.println( " . ");
      Serial.println( broadcast[3]);

#endif
      fonction = 200;
      compt_touche_int = 0;
      UDP.stop();
      config_arnet();

    }
  }


  //Sub
  if (inc == 4) {
#ifdef DEBUG
    Serial.println("********inc==3**********");
    Serial.println("************************");
    Serial.print("compt_touche_int =");
    Serial.println(compt_touche_int);
    Serial.println("************************");
    Serial.println("************************");
#endif
    if (compt_touche_int == 0) {
      bu[0] = 'S';
      bu[1] = 'u';
      bu[2] = 'b';
      bu[3] = 'n';
      bu[4] = 'e';
      bu[5] = 't';
      bu[6] = 'I';
      bu[7] = 'D';
      bu[8] = ' ';
      bu[9] = '=';
      bu[10] = '>';
      bu[11] = ' ';
      bu[12] = ' ';
      bu[13] = char(rsaisie_int[0] + 48);
      bu[14] = ' ';
      bu[15] = ' ';
      bu[16] = ' ';
      bu[17] = ' ';
      bu[18] = ' ';

      t_40.setText(bu);
    }
    if (compt_touche_int == 1) {
      bu[0] = 'S';
      bu[1] = 'u';
      bu[2] = 'b';
      bu[3] = 'n';
      bu[4] = 'e';
      bu[5] = 't';
      bu[6] = 'I';
      bu[7] = 'D';
      bu[8] = ' ';
      bu[9] = '=';
      bu[10] = '>';
      bu[11] = ' ';
      bu[12] = char(rsaisie_int[0] + 48);
      bu[13] = char(rsaisie_int[1] + 48);
      bu[14] = ' ';
      bu[15] = ' ';
      bu[16] = ' ';
      bu[17] = ' ';
      bu[18] = ' ';
      t_40.setText(bu);
    }

    if (nombre_saisi_int > 2) nombre_saisi_int = 0;

    if (touche_int == 20) {
      artNetSub = L;

      EEPROM.write(62, artNetSub);
      EEPROM.commit();

      rsaisie_int[0] = 0;
      rsaisie_int[1] = 0;
      bu[14] = '*';
      t_40.setText(bu);
#ifdef DEBUG
      Serial.print("artNetSub =");
      Serial.println(artNetSub);
      Serial.println("************************");
#endif
      fonction = 200;
      compt_touche_int = 0;
      DMX_Universe = ((artNetSub * 16) + artNetUniA);
      UDP.stop();
      config_arnet();

    }
  }

  // Uni
  if (inc == 3) {
#ifdef DEBUG
    Serial.println("********inc==4**********");
    Serial.println("************************");
    Serial.print("compt_touche_int =");
    Serial.println(compt_touche_int);
    Serial.println("************************");
    Serial.println("************************");
#endif
    if (compt_touche_int == 0) {
      bu[0] = 'U';
      bu[1] = 'n';
      bu[2] = 'i';
      bu[3] = 'v';
      bu[4] = 'e';
      bu[5] = 'r';
      bu[6] = 's';
      bu[7] = 'e';
      bu[8] = 'I';
      bu[9] = 'D';
      bu[10] = ' ';
      bu[11] = '=';
      bu[12] = '>';
      bu[13] = ' ';
      bu[14] = ' ';
      bu[15] = char(rsaisie_int[0] + 48);
      bu[16] = ' ';
      bu[17] = ' ';
      bu[18] = ' ';

      t_40.setText(bu);
    }
    if (compt_touche_int == 1) {
      bu[0] = 'U';
      bu[1] = 'n';
      bu[2] = 'i';
      bu[3] = 'v';
      bu[4] = 'e';
      bu[5] = 'r';
      bu[6] = 's';
      bu[7] = 'e';
      bu[8] = 'I';
      bu[9] = 'D';
      bu[10] = ' ';
      bu[11] = '=';
      bu[12] = '>';
      bu[13] = ' ';
      bu[14] = char(rsaisie_int[0] + 48);
      bu[15] = char(rsaisie_int[1] + 48);
      bu[16] = ' ';
      bu[17] = ' ';
      bu[18] = ' ';

      t_40.setText(bu);
    }

    if (nombre_saisi_int > 2) nombre_saisi_int = 0;

    if (touche_int == 20) {
      artNetUniA = L;

      EEPROM.write(350, artNetUniA);
      EEPROM.commit();

      rsaisie_int[0] = 0;
      rsaisie_int[1] = 0;
      bu[16] = '*';
      t_40.setText(bu);
#ifdef DEBUG
      Serial.print("artNetUniA =");
      Serial.println(artNetUniA);
      Serial.println("************************");
#endif
      fonction = 200;
      compt_touche_int = 0;
      DMX_Universe = ((artNetSub * 16) + artNetUniA);
      UDP.stop();
      config_arnet();

    }
  }


  compt_touche_int = compt_touche_int + 1;
  if ((compt_touche_int > 4) && (inc == 0) && (fonction != 200)) {
    compt_touche_int = 0;
    bu[12] = ' ';
    bu[13] = ' ';
    bu[14] = ' ';
    bu[15] = ' ';
    bu[16] = ' ';
    bu[17] = ' ';
    bu[18] = ' ';
    t_40.setText(bu);
#ifdef DEBUG
    Serial.println("******************************");
    Serial.println("***compt_touche_int>4 inc0 ***");
    Serial.println("******************************");
#endif
  }
  if ((compt_touche_int > 12) && (inc == 1) && (fonction != 200)) {
    compt_touche_int = 0;
    bu[0] = 'I';
    bu[1] = 'P';
    bu[2] = ':';
    bu[3] = ' ';
    bu[4] = ' ';
    bu[5] = ' ';
    bu[6] = ',';
    bu[7] = ' ';
    bu[8] = ' ';
    bu[9] = ' ';
    bu[10] = ',';
    bu[11] = ' ';
    bu[12] = ' ';
    bu[13] = ' ';
    bu[14] = ',';
    bu[15] = ' ';
    bu[16] = ' ';
    bu[17] = ' ';
    bu[18] = ' ';
    t_40.setText(bu);
#ifdef DEBUG
    Serial.println("*******************************");
    Serial.println("***compt_touche_int>12 inc1 ***");
    Serial.println("*******************************");
#endif
  }
  if ((compt_touche_int > 12) && (inc == 2) && (fonction != 200)) {
    compt_touche_int = 0;
    bu[0] = 'I';
    bu[1] = 'P';
    bu[2] = ':';
    bu[3] = ' ';
    bu[4] = ' ';
    bu[5] = ' ';
    bu[6] = ',';
    bu[7] = ' ';
    bu[8] = ' ';
    bu[9] = ' ';
    bu[10] = ',';
    bu[11] = ' ';
    bu[12] = ' ';
    bu[13] = ' ';
    bu[14] = ',';
    bu[15] = ' ';
    bu[16] = ' ';
    bu[17] = ' ';
    bu[18] = ' ';
    t_40.setText(bu);
#ifdef DEBUG
    Serial.println("*******************************");
    Serial.println("***compt_touche_int>12 inc2 ***");
    Serial.println("*******************************");
#endif
  }
  if ((compt_touche_int > 2) && (inc == 4) && (fonction != 200)) {
    compt_touche_int = 0;
    bu[12] = ' ';
    bu[13] = ' ';
    bu[14] = ' ';
    bu[15] = ' ';
    bu[16] = ' ';
    bu[17] = ' ';
    bu[18] = ' ';
    t_40.setText(bu);
#ifdef DEBUG
    Serial.println("*****************************");
    Serial.println("***compt_touche_int>2 inc4***");
    Serial.println("*****************************");
#endif
  }
  if ((compt_touche_int > 2) && (inc == 3) && (fonction != 200)) {
    compt_touche_int = 0;
    bu[13] = ' ';
    bu[14] = ' ';
    bu[15] = ' ';
    bu[16] = ' ';
    bu[17] = ' ';
    bu[18] = ' ';
    t_40.setText(bu);
#ifdef DEBUG
    Serial.println("******************************");
    Serial.println("***compt_touche_int>2 inc3 ***");
    Serial.println("******************************");
#endif
  }

}

