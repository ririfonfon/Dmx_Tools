void fonction5 () {
  if (touche_int == 54) {
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
    fonction = 6;
    touche_int = 56; // send dmx
  }
}

