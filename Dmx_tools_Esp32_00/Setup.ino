
// lib  NeoNextion-2.2.0
#include <Nextion.h>
#include <NextionPage.h>
#include <NextionProgressBar.h>
#include <NextionText.h>
#include <NextionButton.h>
#include <NextionPicture.h>

// decla fonction nextion

NextionProgressBar j_0  (nex, 2, 20, "j0");
NextionProgressBar j_1  (nex, 2, 21, "j1");
NextionProgressBar j_2  (nex, 2, 22, "j2");
NextionProgressBar j_3  (nex, 2, 23, "j3");
NextionProgressBar j_4  (nex, 2, 24, "j4");
NextionProgressBar j_5  (nex, 2, 25, "j5");
NextionProgressBar j_6  (nex, 2, 26, "j6");
NextionProgressBar j_7  (nex, 2, 27, "j7");
NextionProgressBar j_8  (nex, 2, 28, "j8");

NextionButton b_38  (nex, 1, 43, "b0");//0
NextionButton b_39  (nex, 1, 44, "b1");//1
NextionButton b_40  (nex, 1, 45, "b2");//2
NextionButton b_41  (nex, 1, 46, "b3");//3
NextionButton b_42  (nex, 1, 47, "b4");//4
NextionButton b_43  (nex, 1, 48, "b5");//5
NextionButton b_44  (nex, 1, 49, "b6");//6
NextionButton b_45  (nex, 1, 50, "b7");//7
NextionButton b_46  (nex, 1, 51, "b8");//8
NextionButton b_47  (nex, 1, 52, "b9");//9
NextionButton b_48  (nex, 1, 53, "b10");//+
NextionButton b_49  (nex, 1, 54, "b11");//Thru
NextionButton b_50  (nex, 1, 55, "b12");//-
NextionButton b_51  (nex, 1, 56, "b13");//.
NextionButton b_52  (nex, 1, 57, "b14");//cl.
NextionButton b_53  (nex, 1, 58, "b15");//at
NextionButton b_54  (nex, 1, 59, "b13");//Full
NextionButton b_55  (nex, 1, 60, "b14");//High Light
NextionButton b_56  (nex, 1, 61, "b15");//Enter

NextionButton b_0  (nex, 2, 3, "b0");//0
NextionButton b_1  (nex, 2, 4, "b1");//1
NextionButton b_2  (nex, 2, 5, "b2");//2
NextionButton b_3  (nex, 2, 6, "b3");//3
NextionButton b_4  (nex, 2, 7, "b4");//4
NextionButton b_5  (nex, 2, 8, "b5");//5
NextionButton b_6  (nex, 2, 9, "b6");//6
NextionButton b_7  (nex, 2, 10, "b7");//7
NextionButton b_8  (nex, 2, 11, "b8");//8
NextionButton b_9  (nex, 2, 12, "b9");//9
NextionButton b_10  (nex, 2, 13, "b10");//+ inc
NextionButton b_11  (nex, 2, 14, "b11");//incremante
NextionButton b_12  (nex, 2, 15, "b12");//- inc
NextionButton b_13  (nex, 2, 16, "b13");//
NextionButton b_14  (nex, 2, 17, "b14");//cl.
NextionButton b_15  (nex, 2, 18, "b15");//enter

NextionText t_0 (nex, 0, 1, "t0");//titre
NextionText t_1 (nex, 0, 1, "t1");// ver
NextionText t_2 (nex, 0, 1, "t2");//remote
NextionText t_3 (nex, 0, 2, "t3");//espion
NextionText t_4 (nex, 0, 3, "t4");//Dip-Tool
NextionText t_5 (nex, 0, 6, "t5");//Art-Net Config
NextionText t_6 (nex, 0, 7, "t6");//NetWork Config
NextionText t_10 (nex, 1, 43, "t10");
NextionText t_20 (nex, 2, 2, "t20");
NextionText t_30 (nex, 3, 15, "t30");
NextionText t_40 (nex, 4, 1, "t40");
NextionText t_50 (nex, 5, 4, "t50");//texte page 5

NextionText t_301 (nex, 3, 3, "t301");
NextionText t_302 (nex, 3, 5, "t302");
NextionText t_303 (nex, 3, 7, "t303");
NextionText t_304 (nex, 3, 9, "t304");
NextionText t_305 (nex, 3, 11, "t305");
NextionText t_306 (nex, 3, 13, "t306");
NextionText t_307 (nex, 3, 30, "t307");
NextionText t_308 (nex, 3, 31, "t308");
NextionText t_309 (nex, 3, 32, "t309");
NextionText t_310 (nex, 3, 33, "t310");
NextionText t_311 (nex, 3, 34, "t311");
NextionText t_312 (nex, 3, 35, "t312");

NextionProgressBar j_300  (nex, 3, 2, "j300");
NextionProgressBar j_301  (nex, 3, 4, "j301");
NextionProgressBar j_302  (nex, 3, 6, "j302");
NextionProgressBar j_303  (nex, 3, 8, "j303");
NextionProgressBar j_304  (nex, 3, 10, "j304");
NextionProgressBar j_305  (nex, 3, 12, "j305");

NextionButton b_338  (nex, 3, 15, "b338");//0
NextionButton b_339  (nex, 3, 16, "b339");//1
NextionButton b_340  (nex, 3, 17, "b340");//2
NextionButton b_341  (nex, 3, 18, "b341");//3
NextionButton b_342  (nex, 3, 19, "b342");//4
NextionButton b_343  (nex, 3, 20, "b343");//5
NextionButton b_344  (nex, 3, 21, "b344");//6
NextionButton b_345  (nex, 3, 22, "b345");//7
NextionButton b_346  (nex, 3, 23, "b346");//8
NextionButton b_347  (nex, 3, 24, "b347");//9
NextionButton b_348  (nex, 3, 25, "b348");//+
NextionButton b_349  (nex, 3, 26, "b349");//load
NextionButton b_350  (nex, 3, 27, "b350");//-
NextionButton b_352  (nex, 3, 28, "b352");//cl.
NextionButton b_356  (nex, 3, 29, "b356");//Enter

NextionButton b_438  (nex, 4, 2, "b438");//0
NextionButton b_439  (nex, 4, 3, "b439");//1
NextionButton b_440  (nex, 4, 4, "b440");//2
NextionButton b_441  (nex, 4, 5, "b441");//3
NextionButton b_442  (nex, 4, 6, "b442");//4
NextionButton b_443  (nex, 4, 7, "b443");//5
NextionButton b_444  (nex, 4, 8, "b444");//6
NextionButton b_445  (nex, 4, 9, "b445");//7
NextionButton b_446  (nex, 4, 10, "b446");//8
NextionButton b_447  (nex, 4, 11, "b447");//9
NextionButton b_448  (nex, 4, 12, "b448");//port
NextionButton b_449  (nex, 4, 13, "b449");//Ipr
NextionButton b_450  (nex, 4, 14, "b450");//Ips
NextionButton b_451  (nex, 4, 15, "b451");//.
NextionButton b_452  (nex, 4, 16, "b452");//cl.
NextionButton b_453  (nex, 4, 17, "b453");//
NextionButton b_454  (nex, 4, 18, "b454");//Uni
NextionButton b_455  (nex, 4, 19, "b455");//Sub
NextionButton b_456  (nex, 4, 20, "b456");//Enter

NextionPicture p0(nex, 0, 0, "p0");//network page 0
NextionPicture p1(nex, 1, 62, "p1");//network page 1
NextionPicture p2(nex, 2, 29, "p2");//network page 2
NextionPicture p3(nex, 3, 36, "p3");//network page 3
NextionPicture p4(nex, 4, 22, "p4");//network page 4
NextionPicture p5(nex, 5, 8, "p5");//network page 5
NextionPicture p6(nex, 5, 6, "p6");//wifi on off
NextionPicture p7(nex, 5, 7, "p7");//ethernet on off

NextionText return_5 (nex, 5, 2, "t2");//return page 5
NextionText return_4 (nex, 4, 23, "t2");//return page 4
NextionText return_3 (nex, 3, 37, "t2");//return page 3
NextionText return_2 (nex, 2, 30, "t2");//return page 2
NextionText return_1 (nex, 1, 63, "t2");//return page 1

void callback(NextionEventType type, INextionTouchable *widget)
{
  if (type == NEX_EVENT_POP) {
    componentID = widget->getComponentID();
    page_componentID = widget->getPageID();
  }
#ifdef DEBUG
  Serial.println("");
  Serial.println("************************");
  Serial.print("ID *widget = ");
  Serial.println(componentID);
  Serial.print("page ID *widget = ");
  Serial.println(page_componentID);
  Serial.println("************************");
  Serial.println("");
#endif



  switch (page_componentID) {
    // ************* page0 home ************
    case 0:

      switch (componentID) {
        // t2 remote
        case 1:

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
          if ((wifi == 0) && (ethernet == 0))  {
            p1.setPictureID(4);
          }
          if ((wifi == 1) && (ethernet == 0))  {
            p1.setPictureID(5);
          }
          if ((wifi == 0) && (ethernet == 1))  {
            p1.setPictureID(6);
          }
          if ((wifi == 1) && (ethernet == 1))  {
            p1.setPictureID(7);
          }
          break;

        // espion
        case 2:

          t_30.setText ("Start : ?");
          if ((wifi == 0) && (ethernet == 0))  {
            p3.setPictureID(4);
          }
          if ((wifi == 1) && (ethernet == 0))  {
            p3.setPictureID(5);
          }
          if ((wifi == 0) && (ethernet == 1))  {
            p3.setPictureID(6);
          }
          if ((wifi == 1) && (ethernet == 1))  {
            p3.setPictureID(7);
          }
          break;

        // dip_tools
        case 3:
          c_t_i = 0;
          compt_touche_int = 0;
          I = 0;
          inc = 0;
          fonction = 0;
          if ((wifi == 0) && (ethernet == 0))  {
            p2.setPictureID(4);
          }
          if ((wifi == 1) && (ethernet == 0))  {
            p2.setPictureID(5);
          }
          if ((wifi == 0) && (ethernet == 1))  {
            p2.setPictureID(6);
          }
          if ((wifi == 1) && (ethernet == 1))  {
            p2.setPictureID(7);
          }
          break;

        //Ip Config
        case 6:
          if ((wifi == 0) && (ethernet == 0))  {
            p4.setPictureID(4);
          }
          if ((wifi == 1) && (ethernet == 0))  {
            p4.setPictureID(5);
          }
          if ((wifi == 0) && (ethernet == 1))  {
            p4.setPictureID(6);
          }
          if ((wifi == 1) && (ethernet == 1))  {
            p4.setPictureID(7);
          }
          break;

        //network config
        case 7:
          Serial.print ("wifi = ");
          Serial.println (wifi);
          if (wifi == 0) {
            Serial.print ("if wifi = 0");
            p6.setPictureID(8);
          }
          if (wifi == 1) {
            Serial.print ("if wifi = 1");
            p6.setPictureID(9);
          }
          if (ethernet == 0) {
            Serial.print ("if ethernet = 0");
            p7.setPictureID(8);
          }
          if (ethernet == 1) {
            Serial.print ("if ethernet = 1");
            p7.setPictureID(9);
          }
          if ((wifi == 0) && (ethernet == 0))  {
            p5.setPictureID(4);
          }
          if ((wifi == 1) && (ethernet == 0))  {
            p5.setPictureID(5);
          }
          if ((wifi == 0) && (ethernet == 1))  {
            p5.setPictureID(6);
          }
          if ((wifi == 1) && (ethernet == 1))  {
            p5.setPictureID(7);
          }

          break;

      }// ************* page0 home ************
      break;


    case 1:
      // ************* page1 remote ************
      switch (componentID) {

        //return
        case  63:
          if ((wifi == 0) && (ethernet == 0))  {
            p0.setPictureID(4);
          }
          if ((wifi == 1) && (ethernet == 0))  {
            p0.setPictureID(5);
          }
          if ((wifi == 0) && (ethernet == 1))  {
            p0.setPictureID(6);
          }
          if ((wifi == 1) && (ethernet == 1))  {
            p0.setPictureID(7);
          }
          break;

        // remote 0
        case 43:
          touche_int = 38;
          c_t_i = c_t_i + 1;
          fonction = 2;
          clear_t = 0;
          break;

        // remote 1
        case 44:
          touche_int = 39;
          c_t_i = c_t_i + 1;
          fonction = 2;
          clear_t = 0;
          break;

        // remote 2
        case 45:
          touche_int = 40;
          c_t_i = c_t_i + 1;
          fonction = 2;
          clear_t = 0;
          break;

        // remote 3
        case 46:
          touche_int = 41;
          c_t_i = c_t_i + 1;
          fonction = 2;
          clear_t = 0;
          break;

        // remote 4
        case 47:
          touche_int = 42;
          c_t_i = c_t_i + 1;
          fonction = 2;
          clear_t = 0;
          break;

        // remote 5
        case 48:
          touche_int = 43;
          c_t_i = c_t_i + 1;
          fonction = 2;
          clear_t = 0;
          break;

        // remote 6
        case 49:
          touche_int = 44;
          c_t_i = c_t_i + 1;
          fonction = 2;
          clear_t = 0;
          break;

        // remote 7
        case 50:
          touche_int = 45;
          c_t_i = c_t_i + 1;
          fonction = 2;
          clear_t = 0;
          break;

        // remote 8
        case 51:
          touche_int = 46;
          c_t_i = c_t_i + 1;
          fonction = 2;
          clear_t = 0;
          break;

        // remote 9
        case 52:
          touche_int = 47;
          c_t_i = c_t_i + 1;
          fonction = 2;
          clear_t = 0;
          break;

        // remote +
        case 53:
          touche_int = 48;
          c_t_i = c_t_i + 1;
          fonction = 3;
          clear_t = 0;
          rdcompt_touche_int = p_rdcompt_touche_int;
          dim = 1;
          break;

        // remote thru
        case 54:
          touche_int = 49;
          c_t_i = c_t_i + 1;
          rcompt_touche_int = 0;
          rnombre_saisi_int = 0;
          fonction = 2;
          dim = 0;
          clear_t = 0;
          at = 0;
          r = 2;
          bu[6] = 62;
          t_10.setText(bu);
          break;

        // remote -
        case 55:
          touche_int = 50;
          c_t_i = c_t_i + 1;
          fonction = 3;
          clear_t = 0;
          rdcompt_touche_int = p_rdcompt_touche_int;
          dim = 1;
          break;

        // remote ch
        case 56:
          touche_int = 51;
          c_t_i = c_t_i + 1;
          fonction = 4;
          clear_t = 0;
          dim = 0;
          break;

        // remote clear
        case 57:
          touche_int = 52;
          c_t_i = c_t_i + 1;
          fonction = 2;
          break;

        // remote at
        case 58:
          touche_int = 53;
          c_t_i = c_t_i + 1;
          dim = 1;
          clear_t = 0;
          at++;
          if (at == 2) {
            D = 100;
            bu[13] = ('1');
            bu[14] = ('0');
            bu[15] = ('0');
            t_10.setText(bu);
            touche_int = 56;
            fonction = 6;
          }
          if (at == 3) {
            at = 0;
            D = 0;
            bu[13] = (' ');
            bu[14] = (' ');
            bu[15] = (' ');
            t_10.setText(bu);
          }
          break;

        // remote full
        case 59:
          touche_int = 54;
          c_t_i = c_t_i + 1;
          fonction = 5;
          clear_t = 0;
          D = 100;
          dim = 1;
          break;

        // remote high
        case 60:
          touche_int = 55;
          c_t_i = c_t_i + 1;
          fonction = 5;
          clear_t = 0;
          break;

        // remote Enter
        case 61:
          touche_int = 56;
          c_t_i = c_t_i + 1;
          fonction = 6;
          clear_t = 0;
          dim = 1;
          break;
      }// ************* page1 remote ************
      break;


    case 2:
      // ************* page2 diptool ************
      switch (componentID) {
        //return
        case  30:
          if ((wifi == 0) && (ethernet == 0))  {
            p0.setPictureID(4);
          }
          if ((wifi == 1) && (ethernet == 0))  {
            p0.setPictureID(5);
          }
          if ((wifi == 0) && (ethernet == 1))  {
            p0.setPictureID(6);
          }
          if ((wifi == 1) && (ethernet == 1))  {
            p0.setPictureID(7);
          }
          break;

        // dip 0
        case 3:
          touche_int = 0;
          c_t_i = c_t_i + 1;
          break;


        // dip 1
        case 4:
          touche_int = 1;
          c_t_i = c_t_i + 1;
          break;

        // dip 2
        case 5:
          touche_int = 2;
          c_t_i = c_t_i + 1;
          break;

        // dip 3
        case 6:
          touche_int = 3;
          c_t_i = c_t_i + 1;
          break;

        // dip 4
        case 7:
          touche_int = 4;
          c_t_i = c_t_i + 1;
          break;

        // dip 5
        case 8:
          touche_int = 5;
          c_t_i = c_t_i + 1;
          break;

        // dip 6
        case 9:
          touche_int = 6;
          c_t_i = c_t_i + 1;
          break;

        // dip 7
        case 10:
          touche_int = 7;
          c_t_i = c_t_i + 1;
          break;

        // dip 8
        case 11:
          touche_int = 8;
          c_t_i = c_t_i + 1;
          break;

        // dip 9
        case 12:
          touche_int = 9;
          c_t_i = c_t_i + 1;
          break;

        // dip +
        case 13:
          touche_int = 14;
          c_t_i = c_t_i + 1;
          break;

        // dip incr.
        case 14:
          touche_int = 15;
          c_t_i = 15;
          fonction = 1;
          break;

        // dip -
        case 15:
          touche_int = 16;
          c_t_i = c_t_i + 1;
          break;

        // dip
        case 16:
          nex.sendCommand("page 1");
          break;

        // dip clear
        case 17:
          touche_int = 18;
          c_t_i = c_t_i + 1;
          break;

        // dip Enter
        case 18:
          touche_int = 19;
          c_t_i = c_t_i + 1;
          fonction = 0;
          inc = 1;
          break;
      }// ************* page2 diptool ************
      break;//


    case 3:
      // ************* page3 espion ************
      switch (componentID) {
        //return
        case  37:
          if ((wifi == 0) && (ethernet == 0))  {
            p0.setPictureID(4);
          }
          if ((wifi == 1) && (ethernet == 0))  {
            p0.setPictureID(5);
          }
          if ((wifi == 0) && (ethernet == 1))  {
            p0.setPictureID(6);
          }
          if ((wifi == 1) && (ethernet == 1))  {
            p0.setPictureID(7);
          }
          break;

        // esp 0
        case 15:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 7;
          break;

        // esp 1
        case 16:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 7;
          break;

        // esp 2
        case 17:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 7;
          break;

        // esp 3
        case 18:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 7;
          break;

        // esp 4
        case 19:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 7;
          break;

        // esp 5
        case 20:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 7;
          break;

        // esp 6
        case 21:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 7;
          break;

        // esp 7
        case 22:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 7;
          break;

        // esp 8
        case 23:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 7;
          break;

        // esp 9
        case 24:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 7;
          break;

        // esp -
        case 25:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 7;
          break;

        // esp load
        case 26:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 7;
          break;

        // esp -
        case 27:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 7;
          break;

        // esp clear
        case 28:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 7;
          break;

        // esp enter
        case 29:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 7;
          break;
      } // ************* page3 espion ************
      break;


    case 4:
      // ************* page4 ip config ************
      switch (componentID) {
        //return
        case  23:
          if ((wifi == 0) && (ethernet == 0))  {
            p0.setPictureID(4);
          }
          if ((wifi == 1) && (ethernet == 0))  {
            p0.setPictureID(5);
          }
          if ((wifi == 0) && (ethernet == 1))  {
            p0.setPictureID(6);
          }
          if ((wifi == 1) && (ethernet == 1))  {
            p0.setPictureID(7);
          }
          break;

        // ip 0
        case 2:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 8;
          break;

        // ip 1
        case 3:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 8;
          break;

        // ip 2
        case 4:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 8;
          break;

        // ip 3
        case 5:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 8;
          break;

        // ip 4
        case 6:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 8;
          break;

        // ip 5
        case 7:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 8;
          break;

        // ip 6
        case 8:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 8;
          break;

        // ip 7
        case 9:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 8;
          break;

        // ip 8
        case 10:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 8;
          break;

        // ip 9
        case 11:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 8;
          break;

        // ip port
        case 12:
          fonction = 8;
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          m = uint8_t (ARTNET_PORT / 1000);
          c = uint8_t ((ARTNET_PORT - (m * 1000)) / 100);
          d = uint8_t ((ARTNET_PORT - (m * 1000) - (c * 100)) / 10);
          u = uint8_t ((ARTNET_PORT - (m * 1000) - (c * 100) - (d * 10)) / 1);
          bu[0] = 'D';
          bu[1] = 'e';
          bu[2] = 'f';
          bu[3] = 'o';
          bu[4] = ':';
          bu[5] = '6';
          bu[6] = '4';
          bu[7] = '5';
          bu[8] = '4';
          bu[9] = ' ';
          bu[10] = '=';
          bu[11] = '>';
          bu[12] = char(m + 48);
          bu[13] = char(c + 48);
          bu[14] = char(d + 48);
          bu[15] = char(u + 48);
          bu[16] = ' ';
          bu[17] = ' ';
          bu[18] = ' ';
          t_40.setText(bu);
          inc = 0;
          L = 0;
          compt_touche_int = 0;
          break;

        // ip ipr
        case 13:
          fonction = 200;
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          bu[0] = 'I';
          bu[1] = 'P';
          bu[2] = ':';
          c = uint8_t (ip[0] / 100);
          d = uint8_t ((ip[0] - (c * 100)) / 10);
          u = uint8_t ((ip[0] - (c * 100) - (d * 10)) / 1);
          bu[3] = char(c + 48);
          bu[4] = char(d + 48);
          bu[5] = char(u + 48);
          bu[6] = '.';

          c = uint8_t (ip[1] / 100);
          d = uint8_t ((ip[1] - (c * 100)) / 10);
          u = uint8_t ((ip[1] - (c * 100) - (d * 10)) / 1);
          bu[7] = char(c + 48);
          bu[8] = char(d + 48);
          bu[9] = char(u + 48);
          bu[10] = '.';

          c = uint8_t (ip[2] / 100);
          d = uint8_t ((ip[2] - (c * 100)) / 10);
          u = uint8_t ((ip[2] - (c * 100) - (d * 10)) / 1);
          bu[11] = char(c + 48);
          bu[12] = char(d + 48);
          bu[13] = char(u + 48);
          bu[14] = '.';

          c = uint8_t (ip[3] / 100);
          d = uint8_t ((ip[3] - (c * 100)) / 10);
          u = uint8_t ((ip[3] - (c * 100) - (d * 10)) / 1);
          bu[15] = char(c + 48);
          bu[16] = char(d + 48);
          bu[17] = char(u + 48);
          bu[18] = ' ';

          t_40.setText(bu);
          inc = 1;
          compt_touche_int = 0;
          L = 0;
          break;

        // ip ips
        case 14:
          fonction = 200;
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          bu[0] = 'I';
          bu[1] = 'P';
          bu[2] = ':';
          c = uint8_t (broadcast[0] / 100);
          d = uint8_t ((broadcast[0] - (c * 100)) / 10);
          u = uint8_t ((broadcast[0] - (c * 100) - (d * 10)) / 1);
          bu[3] = char(c + 48);
          bu[4] = char(d + 48);
          bu[5] = char(u + 48);
          bu[6] = '.';

          c = uint8_t (broadcast[1] / 100);
          d = uint8_t ((broadcast[1] - (c * 100)) / 10);
          u = uint8_t ((broadcast[1] - (c * 100) - (d * 10)) / 1);
          bu[7] = char(c + 48);
          bu[8] = char(d + 48);
          bu[9] = char(u + 48);
          bu[10] = '.';

          c = uint8_t (broadcast[2] / 100);
          d = uint8_t ((broadcast[2] - (c * 100)) / 10);
          u = uint8_t ((broadcast[2] - (c * 100) - (d * 10)) / 1);
          bu[11] = char(c + 48);
          bu[12] = char(d + 48);
          bu[13] = char(u + 48);
          bu[14] = '.';

          c = uint8_t (broadcast[3] / 100);
          d = uint8_t ((broadcast[3] - (c * 100)) / 10);
          u = uint8_t ((broadcast[3] - (c * 100) - (d * 10)) / 1);
          bu[15] = char(c + 48);
          bu[16] = char(d + 48);
          bu[17] = char(u + 48);
          bu[18] = ' ';
          t_40.setText(bu);
          inc = 2;
          compt_touche_int = 0;
          L = 0;
          break;

        // ip .
        case 15:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 8;
          break;

        // ip clear
        case 16:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 8;
          break;

        // ip
        case 17:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 8;
          break;

        // ip uni
        case 18:
          fonction = 8;
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          d = uint8_t (artNetUniA / 10);
          u = uint8_t ((artNetUniA - (d * 10)) / 1);
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
          bu[14] = char(d + 48);
          bu[15] = char(u + 48);
          bu[16] = ' ';
          bu[17] = ' ';
          bu[18] = ' ';
          t_40.setText(bu);
          inc = 3;
          compt_touche_int = -1;
          L = 0;
          break;

        // ip sub
        case 19:
          fonction = 8;
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          d = uint8_t (artNetSub / 10);
          u = uint8_t ((artNetSub - (d * 10)) / 1);
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
          bu[12] = char(d + 48);
          bu[13] = char(u + 48);
          bu[14] = ' ';
          bu[15] = ' ';
          bu[16] = ' ';
          bu[17] = ' ';
          bu[18] = ' ';
          t_40.setText(bu);
          inc = 4;
          compt_touche_int = -1;
          L = 0;
          break;

        // ip enter
        case 20:
          touche_int = (componentID);
          c_t_i = c_t_i + 1;
          fonction = 8;
          break;
      }// ************* page4 ip config ************
      break;



    case 5:
      // ************* page5 network config ************
      switch (componentID) {
        //return
        case  2:
          if ((wifi == 0) && (ethernet == 0))  {
            p0.setPictureID(4);
          }
          if ((wifi == 1) && (ethernet == 0))  {
            p0.setPictureID(5);
          }
          if ((wifi == 0) && (ethernet == 1))  {
            p0.setPictureID(6);
          }
          if ((wifi == 1) && (ethernet == 1))  {
            p0.setPictureID(7);
          }
          break;

        //wifi
        case 6:
          if (wifi == 0) {
#ifdef DEBUG
            Serial.print("wifi start");
#endif
            wifi_start();
            p6.setPictureID(9);
            wif = 1;
          }
          if (wifi == 1) {
#ifdef DEBUG
            Serial.print("wifi stop");
#endif
            WiFi.mode(WIFI_OFF);
            p6.setPictureID(8);
            wif = 0;
          }
          if ((wifi == 0) && (ethernet == 0)) {
            p5.setPictureID(5);
          }
          if ((wifi == 0) && (ethernet == 1)) {
            p5.setPictureID(7);
          }
          if ((wifi == 1) && (ethernet == 0)) {
            p5.setPictureID(4);
          }
          if ((wifi == 1) && (ethernet == 1)) {
            p5.setPictureID(6);
          }

          break;

        //ethernet
        case 7:
          if (ethernet == 0) {
#ifdef DEBUG
            Serial.print("ethernet start");
#endif
            t_50.setText("ethernet start");
            // RESET ethernet
#if defined(WIZ_RESET)
#ifdef DEBUG
            Serial.print("Reset Ethernet interface... ");
#endif
            t_50.setText("Reset Ethernet interface... ");
            pinMode(WIZ_RESET, OUTPUT);
            digitalWrite(WIZ_RESET, HIGH);
            delay(100);
            digitalWrite(WIZ_RESET, LOW);
            delay(100);
            digitalWrite(WIZ_RESET, HIGH);
#ifdef DEBUG
            Serial.println("done");
#endif
            t_50.setText("done");
#endif

            // ETH start
            Ethernet.init(WIZ_CS);
#if defined(USE_DHCP)
            if (Ethernet.begin(mac) == 0) {
#if defined(DEBUG)
              Serial.println("DHCP failed... fallback to static");
#endif
              t_50.setText("DHCP failed... fallback to static");
              Ethernet.begin(mac, ip);
            }
#else
            Ethernet.begin(mac, ip);
#endif
#ifdef DEBUG
            Serial.print("HNode IP: ");
            Serial.println(Ethernet.localIP());
            //   Serial.print("mac : ");
            //   Serial.println(char* (mac));
            Serial.print("ip: ");
            Serial.println(ip);
#endif
            t_50.setText("HNode IP: ");


            // UDP Receiver
            Udp.begin(udpPort_node);
#ifdef DEBUG
            Serial.printf("Now listening at IP %s, UDP port %d\n", Ethernet.localIP().toString().c_str(), udpPort_node);
#endif
            t_50.setText("Now listening at IP %s, UDP port %d\n");
            // artnet_start();
            p7.setPictureID(9);
            etherne = 1;
          }
          if (ethernet == 1) {
#ifdef DEBUG
            Serial.print("ethernet stop");
#endif
            // RESET ethernet
#if defined(WIZ_RESET)
#ifdef DEBUG
            Serial.print("Reset Ethernet interface... ");
#endif
            t_50.setText("Reset Ethernet interface... ");
            pinMode(WIZ_RESET, OUTPUT);
            digitalWrite(WIZ_RESET, HIGH);
            delay(100);
            digitalWrite(WIZ_RESET, LOW);
            delay(100);
            digitalWrite(WIZ_RESET, HIGH);
#ifdef DEBUG
            Serial.println("done");
#endif
            t_50.setText("Reset done");
#endif
            p7.setPictureID(8);
            etherne = 0;
          }
          if ((wifi == 0) && (ethernet == 0)) {
            p5.setPictureID(6);
          }
          if ((wifi == 0) && (ethernet == 1)) {
            p5.setPictureID(4);
          }
          if ((wifi == 1) && (ethernet == 0)) {
            p5.setPictureID(7);
          }
          if ((wifi == 1) && (ethernet == 1)) {
            p5.setPictureID(5);
          }

          break;

      }
      break; // ************* page5 network config ************
  }// id

}// callback

void setup() {
#ifdef DEBUG
  Serial.begin(19200);
#endif
  NEXTION_PORT.begin(19200);
  Serial.flush();
  NEXTION_PORT.flush();

  nex.init();

  t_0.attachCallback(&callback);// en tete
  t_1.attachCallback(&callback);// version
  t_2.attachCallback(&callback);// remote
  t_3.attachCallback(&callback);// espion
  t_4.attachCallback(&callback);// dip tools
  t_5.attachCallback(&callback);// artnet config
  t_6.attachCallback(&callback);// NetWork config

  b_0.attachCallback(&callback);
  b_1.attachCallback(&callback);
  b_2.attachCallback(&callback);
  b_3.attachCallback(&callback);
  b_4.attachCallback(&callback);
  b_5.attachCallback(&callback);
  b_6.attachCallback(&callback);
  b_7.attachCallback(&callback);
  b_8.attachCallback(&callback);
  b_9.attachCallback(&callback);
  b_10.attachCallback(&callback);
  b_11.attachCallback(&callback);
  b_12.attachCallback(&callback);
  b_13.attachCallback(&callback);
  b_14.attachCallback(&callback);
  b_15.attachCallback(&callback);

  b_38.attachCallback(&callback);
  b_39.attachCallback(&callback);
  b_40.attachCallback(&callback);
  b_41.attachCallback(&callback);
  b_42.attachCallback(&callback);
  b_43.attachCallback(&callback);
  b_44.attachCallback(&callback);
  b_45.attachCallback(&callback);
  b_46.attachCallback(&callback);
  b_47.attachCallback(&callback);
  b_48.attachCallback(&callback);
  b_49.attachCallback(&callback);
  b_50.attachCallback(&callback);
  b_51.attachCallback(&callback);
  b_52.attachCallback(&callback);
  b_53.attachCallback(&callback);
  b_54.attachCallback(&callback);
  b_55.attachCallback(&callback);
  b_56.attachCallback(&callback);

  b_338.attachCallback(&callback);
  b_339.attachCallback(&callback);
  b_340.attachCallback(&callback);
  b_341.attachCallback(&callback);
  b_342.attachCallback(&callback);
  b_343.attachCallback(&callback);
  b_344.attachCallback(&callback);
  b_345.attachCallback(&callback);
  b_346.attachCallback(&callback);
  b_347.attachCallback(&callback);
  b_348.attachCallback(&callback);
  b_349.attachCallback(&callback);
  b_350.attachCallback(&callback);
  b_352.attachCallback(&callback);
  b_356.attachCallback(&callback);

  b_438.attachCallback(&callback);
  b_439.attachCallback(&callback);
  b_440.attachCallback(&callback);
  b_441.attachCallback(&callback);
  b_442.attachCallback(&callback);
  b_443.attachCallback(&callback);
  b_444.attachCallback(&callback);
  b_445.attachCallback(&callback);
  b_446.attachCallback(&callback);
  b_447.attachCallback(&callback);
  b_448.attachCallback(&callback);
  b_449.attachCallback(&callback);
  b_450.attachCallback(&callback);
  b_451.attachCallback(&callback);
  b_452.attachCallback(&callback);
  b_453.attachCallback(&callback);
  b_454.attachCallback(&callback);
  b_455.attachCallback(&callback);
  b_456.attachCallback(&callback);

  p6.attachCallback(&callback);
  p7.attachCallback(&callback);

  return_1.attachCallback(&callback);
  return_2.attachCallback(&callback);
  return_3.attachCallback(&callback);
  return_4.attachCallback(&callback);
  return_5.attachCallback(&callback);

  R[1] = {0};
  R[2] = {0};
  p0.setPictureID(4);
  // eeprom
  t_1.setText("   eeprom_load    ");
  eeprom_begin();
  eeprom_load();
  delay (100);

  //initialise artnet header
  //config_arnet();

  //  pinMode(2, OUTPUT);
  //  digitalWrite(2, LOW);
  ESP8266DMX.startOutput();
  //ESP8266DMX.startInput();
  //  dmx.init(512);
  //  artnet_start();

  t_1.setText("  RIRI V 0.7     ");
#ifdef DEBUG
  Serial.println("  RIRI V 0.7     ");
#endif

}// setup

void t50(char tt[]) {
  t_50.setText(tt);
}//void t_50

