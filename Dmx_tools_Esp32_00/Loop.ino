void loop() {
  if (wif == 1) wifi = 1;
  if (wif == 0) wifi = 0;
  if (etherne == 1) ethernet = 1;
  if (etherne == 0) ethernet = 0;

  nex.poll();
  //  UDP.beginPacket(broadcast, ARTNET_PORT);
  //  UDP.write(ArtdmxBuffer,(17+512+1)); // was Udp.sendPacket
  //  UDP.endPacket();


  if (cc_t_i != c_t_i)
  {
    c_t_i = cc_t_i;

#ifdef DEBUG
    Serial.println("************************");
    Serial.print("c_t_i  =");
    Serial.println(c_t_i);
    Serial.print("compt_touche_int =");
    Serial.println(compt_touche_int);
    Serial.print("I =");
    Serial.println(I);
    Serial.print("inc =");
    Serial.println(inc);
    Serial.print("fonction =");
    Serial.println(fonction);
    Serial.print("touche_int =");
    Serial.println(touche_int);
    Serial.print("rcompt_touche_int =");
    Serial.println(rcompt_touche_int);
    Serial.print("R[1] =");
    Serial.println(R[1]);
    Serial.print("R[2] =");
    Serial.println(R[2]);
    Serial.print("dim =");
    Serial.println(dim);
    Serial.print("rdcompt_touche_int =");
    Serial.println(rdcompt_touche_int);
    Serial.print("D =");
    Serial.println(D);
    Serial.print("L =");
    Serial.println(L);
    Serial.println("************************");
#endif

    if (fonction == 0) {
      fonction0 ();
    }//fonction 0

    if (fonction == 1) {
      fonction1 ();
    }//fonction 1

    if (fonction == 2) {
      fonction2 ();
    }//fonction 2

    if (fonction == 3) {
      fonction3 ();
    }//fonction3

    if (fonction == 4) {
#ifdef DEBUG
      Serial.println("************************");
      Serial.println("******fonction 4********");
      Serial.println("************************");
#endif
    }//   fonction4 ();

    if (fonction == 5) {
      fonction5 ();
    }//fonction 5

    if (fonction == 6) {
      fonction6 ();
    }//fonction 6

    if (fonction == 7) {
#ifdef DEBUG
      Serial.println("************************");
      Serial.println("******fonction 7********");
      Serial.println("************************");
#endif
      fonction7 ();
    }//fonction 7


    if (fonction == 8) {
#ifdef DEBUG
      Serial.println("************************");
      Serial.println("******fonction 8********");
      Serial.println("************************");
#endif
      fonction8 ();
    }//fonction 8

  }//if (cc_t_i != c_t_i)
}//void loop()
