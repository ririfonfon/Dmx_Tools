void fonction2 () {
  if (touche_int == 52) {
    clear_t++;
#ifdef DEBUG
    Serial.print("clear_t = ");
    Serial.println(clear_t);
#endif

    if ((clear_t == 1) && (dim == 0)) {
      rcompt_touche_int = 3;
      rnombre_saisi_int = 0;
      R[r] = 0;
      bu[0] = 'C';
      bu[1] = 'h';
      bu[2] = ':';
      bu[3] = ' ';
      bu[4] = ' ';
      bu[5] = ' ';
      bu[6] = ' ';
      bu[7] = ' ';
      bu[8] = ' ';
      bu[9] = ' ';
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
    }
    if (clear_t == 2) {
      rcompt_touche_int = 3;
      rnombre_saisi_int = 0;
      R[1] = 0;
      R[2] = 0;
      bu[0] = 'C';
      bu[1] = 'h';
      bu[2] = ':';
      bu[3] = ' ';
      bu[4] = ' ';
      bu[5] = ' ';
      bu[6] = ' ';
      bu[7] = ' ';
      bu[8] = ' ';
      bu[9] = ' ';
      bu[10] = 'A';
      bu[11] = 't';
      bu[12] = ':';
      t_10.setText(bu);
      dim = 0;
      r = 1;
    }

    if ((clear_t == 1) && (dim == 1)) {
      rdcompt_touche_int = 3;
      rdnombre_saisi_int = 0;
      D = 0;
      bu[0] = 'C';
      bu[1] = 'h';
      bu[2] = ':';
      bu[3] = ' ';
      bu[4] = ' ';
      bu[5] = ' ';
      bu[6] = ' ';
      bu[7] = ' ';
      bu[8] = ' ';
      bu[9] = ' ';
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
      dim = 1;
    }
    if ((clear_t == 3) && (dim == 0)) {
      rcompt_touche_int = 3;
      rnombre_saisi_int = 0;
      rdcompt_touche_int = 3;
      rdnombre_saisi_int = 0;
      R[1] = 0;
      R[2] = 0;
      D = 0;
      clear_t = 0;
      dim = 0;
      bu[0] = 'C';
      bu[1] = 'h';
      bu[2] = ':';
      bu[3] = ' ';
      bu[4] = ' ';
      bu[5] = ' ';
      bu[6] = ' ';
      bu[7] = ' ';
      bu[8] = ' ';
      bu[9] = ' ';
      bu[10] = 'A';
      bu[11] = 't';
      bu[12] = ':';
      bu[13] = ' ';
      bu[14] = ' ';
      bu[15] = ' ';
      bu[16] = ' ';
      bu[17] = ' ';
      bu[18] = '%';
      t_10.setText("****release dmx****");
      D = 0;

      for (int Canal = 1; Canal <= 512; Canal ++)
      {
        ESP8266DMX.setSlot(Canal, (D * 2.555));
        buffer_dmx[Canal - 1] = byte((D * 2.555));
      }
      //dmx.update();           // update the DMX bus
      construct_arnet_packet();
#ifdef DEBUG
      Serial.println("");
      Serial.println("************************");
      Serial.println("****** SEND DMX ********");
      Serial.println("channel 1 >512  = 0 ");
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
      r = 1;
      delay (1000);
      t_10.setText(bu);
    }
  }
  if (dim == 0) {
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
    if ((touche_int >= 38) && (touche_int <= 47)) {
      rsaisie_int[rcompt_touche_int] = touche_int - 38;
      if (r == 1) {
        if (rcompt_touche_int == 0) {
          rnombre_saisi_int = rsaisie_int[0];
          bu[3] = ' ';
          bu[4] = ' ';
          bu[5] = (rsaisie_int[0] + 48);
        }
        if (rcompt_touche_int == 1) {
          rnombre_saisi_int = (rsaisie_int[0] * 10) + (rsaisie_int[1] * 1);
          bu[3] = ' ';
          bu[4] = (rsaisie_int[0] + 48);
          bu[5] = (rsaisie_int[1] + 48);
        }
        if (rcompt_touche_int == 2) {
          rnombre_saisi_int = (rsaisie_int[0] * 100) + (rsaisie_int[1] * 10) + (rsaisie_int[2] * 1);
          bu[3] = (rsaisie_int[0] + 48);
          bu[4] = (rsaisie_int[1] + 48);
          bu[5] = (rsaisie_int[2] + 48);
        }
      }
      if (r == 2) {
        if (rcompt_touche_int == 0) {
          rnombre_saisi_int = rsaisie_int[0];
          bu[6] = 62;
          bu[7] = ' ';
          bu[8] = ' ';
          bu[9] = (rsaisie_int[0] + 48);
        }
        if (rcompt_touche_int == 1) {
          rnombre_saisi_int = (rsaisie_int[0] * 10) + (rsaisie_int[1] * 1);
          bu[6] = 62;
          bu[7] = ' ';
          bu[8] = (rsaisie_int[0] + 48);
          bu[9] = (rsaisie_int[1] + 48);
        }
        if (rcompt_touche_int == 2) {
          rnombre_saisi_int = (rsaisie_int[0] * 100) + (rsaisie_int[1] * 10) + (rsaisie_int[2] * 1);
          bu[6] = 62;
          bu[7] = (rsaisie_int[0] + 48);
          bu[8] = (rsaisie_int[1] + 48);
          bu[9] = (rsaisie_int[2] + 48);
        }
      }
      rcompt_touche_int = rcompt_touche_int + 1;
    }

    R[r] = rnombre_saisi_int;

    if ((R[r]) <= 512) {
      t_10.setText(bu);
    }

    if ((R[r]) > 512) {
      t_10.setText("Nombre 512 MAX   ");
      delay (1000);
      bu[0] = 'C';
      bu[1] = 'h';
      bu[2] = ':';
      bu[3] = ' ';
      bu[4] = ' ';
      bu[5] = ' ';
      bu[6] = ' ';
      bu[7] = ' ';
      bu[8] = ' ';
      bu[9] = ' ';
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
      rcompt_touche_int = 3;
      rnombre_saisi_int = 0;
      R[r] = 0;
    }

    if ((R[r]) < 0) {
      t_10.setText("Nombre 0 MIN     ");
      delay (1000);
      bu[0] = 'C';
      bu[1] = 'h';
      bu[2] = ':';
      bu[3] = ' ';
      bu[4] = ' ';
      bu[5] = ' ';
      bu[6] = ' ';
      bu[7] = ' ';
      bu[8] = ' ';
      bu[9] = ' ';
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
      rcompt_touche_int = 3;
      rnombre_saisi_int = 0;
      R[r] = 0;
    }

    if (rcompt_touche_int >= 3)
    {
#ifdef DEBUG
      Serial.println("rcompt touch init d0");
#endif
      rcompt_touche_int = 0;
      // rnombre_saisi_int = 0;
    }
  }
  if (dim == 1) {
    if ((touche_int >= 38) && (touche_int <= 47)) {
      rdsaisie_int[rdcompt_touche_int] = touche_int - 38;
      if (rdcompt_touche_int == 0) {
        rdnombre_saisi_int = rdsaisie_int[0];
        bu[13] = ' ';
        bu[14] = ' ';
        bu[15] = (rdsaisie_int[0] + 48);
      }
      if (rdcompt_touche_int == 1) {
        rdnombre_saisi_int = (rdsaisie_int[0] * 10) + (rdsaisie_int[1] * 1);
        bu[13] = ' ';
        bu[14] = (rdsaisie_int[0] + 48);
        bu[15] = (rdsaisie_int[1] + 48);
      }
      if (rdcompt_touche_int == 2) {
        rdnombre_saisi_int = (rdsaisie_int[0] * 100) + (rdsaisie_int[1] * 10) + (rdsaisie_int[2] * 1);
        bu[13] = (rdsaisie_int[0] + 48);
        bu[14] = (rdsaisie_int[1] + 48);
        bu[15] = (rdsaisie_int[2] + 48);
      }
      rdcompt_touche_int = rdcompt_touche_int + 1;
    }
    D = rdnombre_saisi_int;
    if (D <= 100) {
      t_10.setText(bu);
    }
    if (D > 100) {
      t_10.setText("Dim 100 MAX   ");
      delay (1000);
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
      delay (1000);
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
    if (rdcompt_touche_int >= 3)
    {
      rdcompt_touche_int = 0;
      rdnombre_saisi_int = 0;
    }
  }
}

