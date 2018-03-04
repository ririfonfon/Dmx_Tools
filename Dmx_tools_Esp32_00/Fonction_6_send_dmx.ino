void fonction6 () {
  if (touche_int == 56) {
    itoa(D, D_buffer, 10);
    if ((int(D_buffer[0]) >= 48) && (int(D_buffer[0]) <= 57)) {
      bu[13] = D_buffer[0];
    }
    else
    {
      bu[13] = ' ';
    }
    if ((int(D_buffer[1]) >= 48) && (int(D_buffer[1]) <= 57)) {
      bu[14] = D_buffer[1];
    }
    else
    {
      bu[14] = ' ';
    }
    if ((int(D_buffer[2]) >= 48) && (int(D_buffer[2]) <= 57)) {
      bu[15] = D_buffer[2];
    }
    else
    {
      bu[15] = ' ';
    }
    if (D <= 100) {
      t_10.setText(bu);
    }
    if (r == 1) {
      ESP8266DMX.setSlot(R[1], (D * 2.555));
      //dmx.update();           // update the DMX bus
      buffer_dmx[R[1] - 1] = byte((D * 2.555));

      rcompt_touche_int = 0;
      rnombre_saisi_int = 0;
      p_rdcompt_touche_int = rdcompt_touche_int;
      rdcompt_touche_int = 0;
      rdnombre_saisi_int = 0;
      at = 0;
      construct_arnet_packet();
#ifdef DEBUG
      Serial.println("");
      Serial.println("************************");
      Serial.println("****** SEND DMX ********");
      Serial.print("channel  =");
      Serial.println(R[1]);
      Serial.println("************************");
      Serial.print("dim =");
      Serial.println(int(D * 2.555));
      Serial.println("************************");
      Serial.println("************************");
      Serial.println("");
#endif
    }
    if (r == 2) {
      for (int Canal = R[1]; Canal <= R[2]; Canal ++)
      {
        ESP8266DMX.setSlot(Canal, (D * 2.555));
        //dmx.update();           // update the DMX bus
        buffer_dmx[Canal - 1] = byte((D * 2.555));

      }
      construct_arnet_packet();
#ifdef DEBUG
      Serial.println("");
      Serial.println("************************");
      Serial.println("****** SEND DMX ********");
      Serial.print("channel ");
      Serial.print(R[1]);
      Serial.print(" > ");
      Serial.println(R[2]);
      Serial.print("dim =");
      Serial.println(int(D * 2.555));
      Serial.println("************************");
      Serial.println("************************");
      Serial.println("");
#endif

      rcompt_touche_int = 0;
      rnombre_saisi_int = 0;
      p_rdcompt_touche_int = rdcompt_touche_int;
      rdcompt_touche_int = 0;
      rdnombre_saisi_int = 0;
      at = 0;
    }
  }
}

