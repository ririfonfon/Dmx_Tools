void fonction7 () {
  if ((touche_int >= 15) && (touche_int <= 24)) {
    rsaisie_int[compt_touche_int] = touche_int - 15;

    if (compt_touche_int == 0) nombre_saisi_int = rsaisie_int[0];
    if (compt_touche_int == 1) nombre_saisi_int = (rsaisie_int[0] * 10) + (rsaisie_int[1] * 1);
    if (compt_touche_int == 2) nombre_saisi_int = (rsaisie_int[0] * 100) + (rsaisie_int[1] * 10) + (rsaisie_int[2] * 1);

    compt_touche_int = compt_touche_int + 1;
    L = nombre_saisi_int;
  }



  if (touche_int == 28) {
    compt_touche_int = 3;
    nombre_saisi_int = 1;
    inc = 0;
    L = 1;
  }


  if (touche_int == 25) {
    compt_touche_int = 3;
    ++L;
    inc = 0;
#ifdef DEBUG
    Serial.print("++L =");
    Serial.println(L);
#endif
  }

  if (touche_int == 27) {
    compt_touche_int = 3;
    --L;
    inc = 0;
#ifdef DEBUG
    Serial.print("--L =");
    Serial.println(L);
#endif
  }

  if (L <= 512) {
    itoa(L, buffer, 10);
    t_30.setText(buffer);
  }

  if (L > 507) {

    compt_touche_int = 3;
    nombre_saisi_int = 1;
    L = 1;
    I = 0;
    inc = 0;
  }

  if (L < 1) {

    compt_touche_int = 3;
    nombre_saisi_int = 507;
    L = 507;
    I = 0;
    inc = 0;
  }
  //dmx.update();
  j_300.setValue( ESP8266DMX.getSlot(L) / 2.555); // dmx_slave.getChannelValue(0);
  j_301.setValue( ESP8266DMX.getSlot(L + 1) / 2.555); // dmx_slave.getChannelValue(1);
  j_302.setValue( ESP8266DMX.getSlot(L + 2) / 2.555); // dmx_slave.getChannelValue(2);
  j_303.setValue( ESP8266DMX.getSlot(L + 3) / 2.555); // dmx_slave.getChannelValue(3);
  j_304.setValue( ESP8266DMX.getSlot(L + 4) / 2.555); // dmx_slave.getChannelValue(4);
  j_305.setValue( ESP8266DMX.getSlot(L + 5) / 2.555); // dmx_slave.getChannelValue(5);

  itoa(ESP8266DMX.getSlot(L), buffer, 10);
  t_301.setText(buffer);
  itoa(ESP8266DMX.getSlot(L + 1), buffer, 10);
  t_302.setText(buffer);
  itoa(ESP8266DMX.getSlot(L + 2), buffer, 10);
  t_303.setText(buffer);
  itoa(ESP8266DMX.getSlot(L + 3), buffer, 10);
  t_304.setText(buffer);
  itoa(ESP8266DMX.getSlot(L + 4), buffer, 10);
  t_305.setText(buffer);
  itoa(ESP8266DMX.getSlot(L + 5), buffer, 10);
  t_306.setText(buffer);

  itoa(L, buffer, 10);
  t_307.setText(buffer);
  itoa(L + 1, buffer, 10);
  t_308.setText(buffer);
  itoa(L + 2, buffer, 10);
  t_309.setText(buffer);
  itoa(L + 3, buffer, 10);
  t_310.setText(buffer);
  itoa(L + 4, buffer, 10);
  t_311.setText(buffer);
  itoa(L + 5, buffer, 10);
  t_312.setText(buffer);

#ifdef DEBUG
  Serial.print("L =");
  Serial.println(L);
#endif

  if (compt_touche_int >= 3)
  {
    compt_touche_int = 0;
  }
}

