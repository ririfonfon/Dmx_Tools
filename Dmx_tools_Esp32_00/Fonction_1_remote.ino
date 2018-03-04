void fonction1 () {
  if (touche_int == 15) {
    t_20.setText("Valeur Incr:");
    compt_touche_int = 0;
  }

  if ((touche_int >= 0) && (touche_int <= 9)) {
    incr_int[compt_touche_int] = touche_int;

    if (compt_touche_int == 0) incr_saisi_int = incr_int[0];
    if (compt_touche_int == 1) incr_saisi_int = (incr_int[0] * 10) + (incr_int[1] * 1);
    if (compt_touche_int == 2) incr_saisi_int = (incr_int[0] * 100) + (incr_int[1] * 10) + (incr_int[2] * 1);

    compt_touche_int = compt_touche_int + 1;

    if (touche_int == 18) {
      compt_touche_int = 3;
      incr_saisi_int = 0;
      fonction = 0;
      inc = 0;
    }

    I = incr_saisi_int;

    if (I <= 512) {
      itoa(I, buffer, 10);
      t_20.setText(buffer);
    }

    if (I > 512) {
      t_20.setText("Nombre 512 MAX   ");
      compt_touche_int = 3;
      incr_saisi_int = 0;
      I = 0;
    }

    if (compt_touche_int >= 3)
    {
      compt_touche_int = 0;
      incr_saisi_int = 0;
    }
  }
}

