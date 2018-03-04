void fonction0 () {
  if ((touche_int >= 0) && (touche_int <= 9)) {
    rsaisie_int[compt_touche_int] = touche_int;

    if (compt_touche_int == 0) nombre_saisi_int = rsaisie_int[0];
    if (compt_touche_int == 1) nombre_saisi_int = (rsaisie_int[0] * 10) + (rsaisie_int[1] * 1);
    if (compt_touche_int == 2) nombre_saisi_int = (rsaisie_int[0] * 100) + (rsaisie_int[1] * 10) + (rsaisie_int[2] * 1);

    compt_touche_int = compt_touche_int + 1;
  }

  if (touche_int == 18) {
    compt_touche_int = 3;
    nombre_saisi_int = 0;
    inc = 0;
  }

  if (inc == 0) {
    L = nombre_saisi_int;
  }

  if (touche_int == 14) {
    L = L + I;
    inc = 1;
  }

  if (touche_int == 16) {
    L = L - I;
    inc = 1;
  }

  if (L <= 512) {
    itoa(L, buffer, 10);
    t_20.setText(buffer);
  }

  if (L > 512) {
    t_20.setText("Nombre 512 MAX   ");
    compt_touche_int = 3;
    nombre_saisi_int = 0;
    L = 0;
    I = 0;
    inc = 0;
  }

  if (L < 0) {
    t_20.setText("Nombre 0 MIN     ");
    compt_touche_int = 3;
    nombre_saisi_int = 0;
    L = 0;
    I = 0;
    inc = 0;
  }


  j_0.setValue(BIT_N(L, 0) * 100);
  j_1.setValue(BIT_N(L, 1) * 100);
  j_2.setValue(BIT_N(L, 2) * 100);
  j_3.setValue(BIT_N(L, 3) * 100);
  j_4.setValue(BIT_N(L, 4) * 100);
  j_5.setValue(BIT_N(L, 5) * 100);
  j_6.setValue(BIT_N(L, 6) * 100);
  j_7.setValue(BIT_N(L, 7) * 100);
  j_8.setValue(BIT_N(L, 8) * 100);

  if (compt_touche_int >= 3)
  {
    compt_touche_int = 0;
    nombre_saisi_int = 0;
  }
}

