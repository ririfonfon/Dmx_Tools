void fonction3 () {
  if (touche_int == 48) {
    D++;
    fonction = 6;
    touche_int = 56; // send dmx
  }
  if (touche_int == 50) {
    D--;
    fonction = 6;
    touche_int = 56; // send dmx
  }
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
  if (D > 100) {
    t_10.setText("Dim 100 MAX   ");
    delay(1000);
    bu[0] = 'C';
    bu[1] = 'h';
    bu[2] = ':';
    bu[10] = 'A';
    bu[11] = 't';
    bu[12] = ':';
    bu[13] = ' ';
    bu[14] = ' ';
    bu[15] = ' ';
    bu[16] = ' ';
    bu[17] = ' ';
    bu[18] = '%';
    t_10.setText(bu);
    rdcompt_touche_int = 3;
    rdnombre_saisi_int = 0;
    D = 100;
  }
  if (D < 0) {
    t_10.setText("Dim 0 MIN     ");
    delay(1000);
    bu[0] = 'C';
    bu[1] = 'h';
    bu[2] = ':';
    bu[10] = 'A';
    bu[11] = 't';
    bu[12] = ':';
    bu[13] = ' ';
    bu[14] = ' ';
    bu[15] = ' ';
    bu[16] = ' ';
    bu[17] = ' ';
    bu[18] = '%';
    t_10.setText(bu);
    rdcompt_touche_int = 3;
    rdnombre_saisi_int = 0;
    D = 0;
  }
  fonction = 6;
  touche_int = 56; // send dmx
}

