/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00191d4c  Symbol: FUN_00191d4c */

/* WARNING: Removing unreachable block (ram,0x00192504) */
/* WARNING: Removing unreachable block (ram,0x00191ea4) */
/* WARNING: Removing unreachable block (ram,0x00191fc6) */
/* WARNING: Removing unreachable block (ram,0x001921a0) */
/* WARNING: Removing unreachable block (ram,0x0019236e) */
/* WARNING: Removing unreachable block (ram,0x0019263e) */

int FUN_00191d4c(byte **param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  byte *pbVar5;
  uint uVar6;
  code *pcVar7;
  int unaff_r6;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  code **unaff_r7;
  byte *local_28;
  byte *local_24;
  byte *local_20;
  
  pcVar7 = (code *)(DAT_00191ff8 + 0x191d58);
  if (param_1 == (byte **)0x0) goto LAB_00191db8;
  iVar2 = (***(code ***)(pcVar7 + DAT_00191ffc))(0x51);
  if (iVar2 != 0) {
    local_28 = *param_1;
    if (local_28 != (byte *)0x0) {
      unaff_r7 = (code **)0x50;
      unaff_r6 = 0;
      local_24 = DAT_00192000;
      goto LAB_00191dc8;
    }
    unaff_r7 = (code **)0x50;
    pbVar8 = (byte *)0x0;
LAB_00191dee:
    pbVar5 = DAT_00192000;
    pbVar9 = param_1[1];
    if (param_1[1] != (byte *)0x0) {
      do {
        local_24 = pbVar9;
        local_28 = local_24 + 1;
        if (*local_24 == 0) goto LAB_00192550;
        iVar3 = iVar2;
        if ((int)unaff_r7 <= (int)(pbVar8 + 3)) {
          unaff_r7 = (code **)((int)unaff_r7 * 2);
          iVar3 = (***(code ***)(pcVar7 + (int)pbVar5))(iVar2,(int)unaff_r7 + 1);
          if (iVar3 == 0) goto code_r0x00191d9c;
        }
        bVar1 = *local_24;
        uVar6 = (uint)bVar1;
        if ((((((uVar6 == 0x2f) || (uVar6 == 0x3b)) || (uVar6 == 0x3f)) ||
             (((uVar6 == 0x3a || (uVar6 == 0x40)) ||
              ((uVar6 == 0x26 || ((uVar6 == 0x3d || (uVar6 == 0x2b)))))))) ||
            ((uVar6 == 0x24 ||
             ((((uVar6 == 0x2c || (uVar6 == 0x5b)) || (uVar6 == 0x5d)) ||
              (((uVar6 - 0x41 & 0xff) < 0x1a || ((uVar6 - 0x61 & 0xff) < 0x1a)))))))) ||
           ((((((uVar6 - 0x30 & 0xff) < 10 || ((uVar6 == 0x5f || (uVar6 == 0x2d)))) ||
              (uVar6 == 0x2e)) || (((uVar6 == 0x21 || (uVar6 == 0x7e)) || (uVar6 == 0x2a)))) ||
            (((uVar6 == 0x27 || (uVar6 == 0x28)) || (uVar6 == 0x29)))))) {
          pbVar8[iVar3] = bVar1;
        }
        else {
          uVar6 = uVar6 & DAT_00192014;
          pbVar8[iVar3] = 0x25;
          if (bVar1 >> 4 < 10) {
            cVar4 = '0';
          }
          else {
            cVar4 = '7';
          }
          pbVar8[iVar3 + 1] = cVar4 + (bVar1 >> 4);
          pbVar8 = pbVar8 + 2;
          if (uVar6 < 10) {
            cVar4 = '0';
          }
          else {
            cVar4 = '7';
          }
          pbVar8[iVar3] = cVar4 + (char)uVar6;
        }
        pbVar8 = pbVar8 + 1;
        iVar2 = iVar3;
        pbVar9 = local_28;
      } while( true );
    }
    if (param_1[3] == (byte *)0x0) {
      if (param_1[2] == (byte *)0x0) {
        if (*param_1 != (byte *)0x0) {
          iVar3 = iVar2;
          if ((int)unaff_r7 <= (int)(pbVar8 + 3)) {
            unaff_r7 = (code **)((int)unaff_r7 * 2);
            iVar3 = (***(code ***)(pcVar7 + (int)DAT_001922bc))(iVar2,(int)unaff_r7 + 1);
            if (iVar3 == 0) goto code_r0x00191d9c;
          }
          pbVar8[iVar3] = 0x2f;
          pbVar8[iVar3 + 1] = 0x2f;
          pbVar8 = pbVar8 + 2;
          iVar2 = iVar3;
        }
      }
      else {
        iVar3 = iVar2;
        if ((int)unaff_r7 <= (int)(pbVar8 + 3)) {
          unaff_r7 = (code **)((int)unaff_r7 * 2);
          iVar3 = (***(code ***)(pcVar7 + (int)DAT_001922bc))(iVar2,(int)unaff_r7 + 1);
          if (iVar3 == 0) goto code_r0x00191d9c;
        }
        pbVar8[iVar3] = 0x2f;
        pbVar8[iVar3 + 1] = 0x2f;
        pbVar5 = DAT_001922bc;
        pbVar8 = pbVar8 + 2;
        local_24 = param_1[2];
        iVar2 = iVar3;
        while (local_28 = local_24 + 1, *local_24 != 0) {
          iVar3 = iVar2;
          if ((int)unaff_r7 <= (int)(pbVar8 + 3)) {
            unaff_r7 = (code **)((int)unaff_r7 * 2);
            iVar3 = (***(code ***)(pcVar7 + (int)pbVar5))(iVar2,(int)unaff_r7 + 1);
            if (iVar3 == 0) goto code_r0x00191d9c;
          }
          bVar1 = *local_24;
          uVar6 = (uint)bVar1;
          if ((((uVar6 - 0x41 & 0xff) < 0x1a) || ((uVar6 - 0x61 & 0xff) < 0x1a)) ||
             (((((uVar6 - 0x30 & 0xff) < 10 ||
                (((uVar6 == 0x5f || (uVar6 == 0x2d)) || (uVar6 == 0x2e)))) ||
               (((uVar6 == 0x21 || (uVar6 == 0x7e)) || (uVar6 == 0x2a)))) ||
              ((((uVar6 == 0x27 || (uVar6 == 0x28)) ||
                ((uVar6 == 0x29 || (((uVar6 == 0x24 || (uVar6 == 0x2c)) || (uVar6 == 0x3b)))))) ||
               (((uVar6 == 0x3a || (uVar6 == 0x40)) ||
                ((uVar6 == 0x26 || ((uVar6 == 0x3d || (uVar6 == 0x2b)))))))))))) {
            pbVar8[iVar3] = bVar1;
          }
          else {
            uVar6 = uVar6 & DAT_001922c4;
            pbVar8[iVar3] = 0x25;
            if (bVar1 >> 4 < 10) {
              cVar4 = '0';
            }
            else {
              cVar4 = '7';
            }
            pbVar8[iVar3 + 1] = cVar4 + (bVar1 >> 4);
            pbVar8 = pbVar8 + 2;
            if (uVar6 < 10) {
              cVar4 = '0';
            }
            else {
              cVar4 = '7';
            }
            pbVar8[iVar3] = cVar4 + (char)uVar6;
          }
          pbVar8 = pbVar8 + 1;
          iVar2 = iVar3;
          local_24 = local_28;
        }
      }
    }
    else {
      iVar3 = iVar2;
      if ((int)unaff_r7 <= (int)(pbVar8 + 3)) {
        unaff_r7 = (code **)((int)unaff_r7 * 2);
        iVar3 = (***(code ***)(pcVar7 + (int)DAT_00192000))(iVar2,(int)unaff_r7 + 1);
        if (iVar3 == 0) goto code_r0x00191d9c;
      }
      iVar2 = iVar3;
      pbVar8[iVar2] = 0x2f;
      pbVar8[iVar2 + 1] = 0x2f;
      pbVar5 = DAT_00192000;
      pbVar8 = pbVar8 + 2;
      local_24 = param_1[4];
      if (local_24 != (byte *)0x0) {
        while( true ) {
          local_28 = local_24 + 1;
          if (*local_24 == 0) break;
          iVar3 = iVar2;
          if ((int)unaff_r7 <= (int)(pbVar8 + 3)) {
            unaff_r7 = (code **)((int)unaff_r7 * 2);
            iVar3 = (***(code ***)(pcVar7 + (int)pbVar5))(iVar2,(int)unaff_r7 + 1);
            if (iVar3 == 0) goto code_r0x00191d9c;
          }
          bVar1 = *local_24;
          uVar6 = (uint)bVar1;
          if (((((uVar6 - 0x41 & 0xff) < 0x1a) || ((uVar6 - 0x61 & 0xff) < 0x1a)) ||
              (((uVar6 - 0x30 & 0xff) < 10 ||
               (((uVar6 == 0x5f || (uVar6 == 0x2d)) || (uVar6 == 0x2e)))))) ||
             (((uVar6 == 0x21 || (uVar6 == 0x7e)) ||
              ((uVar6 == 0x2a ||
               ((((uVar6 == 0x27 || (uVar6 == 0x28)) ||
                 ((uVar6 == 0x29 ||
                  (((((uVar6 == 0x3b || (uVar6 == 0x3a)) || (uVar6 == 0x26)) ||
                    ((uVar6 == 0x3d || (uVar6 == 0x2b)))) || (uVar6 == 0x24)))))) || (uVar6 == 0x2c)
                ))))))) {
            pbVar8[iVar3] = bVar1;
          }
          else {
            uVar6 = uVar6 & DAT_00192014;
            pbVar8[iVar3] = 0x25;
            if (bVar1 >> 4 < 10) {
              cVar4 = '0';
            }
            else {
              cVar4 = '7';
            }
            pbVar8[iVar3 + 1] = cVar4 + (bVar1 >> 4);
            pbVar8 = pbVar8 + 2;
            if (uVar6 < 10) {
              cVar4 = '0';
            }
            else {
              cVar4 = '7';
            }
            pbVar8[iVar3] = cVar4 + (char)uVar6;
          }
          pbVar8 = pbVar8 + 1;
          iVar2 = iVar3;
          local_24 = local_28;
        }
        iVar3 = iVar2;
        if ((int)unaff_r7 <= (int)(pbVar8 + 3)) {
          unaff_r7 = (code **)((int)unaff_r7 * 2);
          iVar3 = (***(code ***)(pcVar7 + (int)DAT_001922bc))(iVar2,(int)unaff_r7 + 1);
          if (iVar3 == 0) goto code_r0x00191d9c;
        }
        pbVar8[iVar3] = 0x40;
        pbVar8 = pbVar8 + 1;
        iVar2 = iVar3;
      }
      pbVar5 = DAT_001922bc;
      local_28 = param_1[3];
      local_24 = DAT_001922bc;
      while (*local_28 != 0) {
        iVar3 = iVar2;
        if ((int)unaff_r7 <= (int)pbVar8) {
          unaff_r7 = (code **)((int)unaff_r7 * 2);
          iVar3 = (***(code ***)(pcVar7 + (int)pbVar5))(iVar2,(int)unaff_r7 + 1);
          if (iVar3 == 0) goto code_r0x00191d9c;
        }
        bVar1 = *local_28;
        local_28 = local_28 + 1;
        pbVar8[iVar3] = bVar1;
        pbVar8 = pbVar8 + 1;
        iVar2 = iVar3;
      }
      if (0 < (int)param_1[5]) {
        iVar3 = iVar2;
        if ((int)unaff_r7 <= (int)(pbVar8 + 10)) {
          unaff_r7 = (code **)((int)unaff_r7 * 2);
          iVar3 = (***(code ***)(pcVar7 + (int)DAT_001922bc))(iVar2,(int)unaff_r7 + 1);
          if (iVar3 == 0) goto code_r0x00191d9c;
        }
        iVar2 = snprintf((char *)(pbVar8 + iVar3),(int)unaff_r7 - (int)pbVar8,
                         (char *)(pcVar7 + DAT_001922c0),param_1[5]);
        pbVar8 = pbVar8 + iVar2;
        iVar2 = iVar3;
      }
    }
    pbVar5 = param_1[6];
    if (pbVar5 == (byte *)0x0) {
      local_28 = (byte *)0x0;
    }
    else {
      local_24 = pbVar5;
      pbVar9 = DAT_001922bc;
      if ((*param_1 != (byte *)0x0) && (*pbVar5 == 0x2f)) {
        if ((((byte)(pbVar5[1] + 0xbf) < 0x1a) || ((byte)(pbVar5[1] + 0x9f) < 0x1a)) &&
           ((pbVar5[2] == 0x3a &&
            (iVar3 = FUN_0019c30c(*param_1,pcVar7 + DAT_001922c8), pbVar9 = DAT_001922bc, iVar3 != 0
            )))) {
          if ((int)unaff_r7 <= (int)(pbVar8 + 3)) {
            unaff_r7 = (code **)((int)unaff_r7 * 2);
            iVar2 = (***(code ***)(pcVar7 + (int)DAT_001922bc))(iVar2,(int)unaff_r7 + 1);
            if (iVar2 == 0) goto LAB_00192282;
          }
          pbVar8[iVar2] = *pbVar5;
          pbVar8[iVar2 + 1] = pbVar5[1];
          local_24 = pbVar5 + 3;
          pbVar8[iVar2 + 2] = pbVar5[2];
          pbVar8 = pbVar8 + 3;
          pbVar9 = DAT_001922bc;
        }
      }
      while (local_28 = local_24 + 1, *local_24 != 0) {
        iVar3 = iVar2;
        if ((int)unaff_r7 <= (int)(pbVar8 + 3)) {
          unaff_r7 = (code **)((int)unaff_r7 * 2);
          iVar3 = (***(code ***)(pcVar7 + (int)pbVar9))(iVar2,(int)unaff_r7 + 1);
          if (iVar3 == 0) goto code_r0x00191d9c;
        }
        bVar1 = *local_24;
        uVar6 = (uint)bVar1;
        if ((((((((uVar6 - 0x41 & 0xff) < 0x1a) || ((uVar6 - 0x61 & 0xff) < 0x1a)) ||
               ((uVar6 - 0x30 & 0xff) < 10)) || ((uVar6 == 0x5f || (uVar6 == 0x2d)))) ||
             ((uVar6 == 0x2e || ((uVar6 == 0x21 || (uVar6 == 0x7e)))))) ||
            ((uVar6 == 0x2a ||
             (((((uVar6 == 0x27 || (uVar6 == 0x28)) || (uVar6 == 0x29)) ||
               (((uVar6 == 0x2f || (uVar6 == 0x3b)) ||
                ((uVar6 == 0x40 || ((uVar6 == 0x26 || (uVar6 == 0x3d)))))))) || (uVar6 == 0x2b))))))
           || ((uVar6 == 0x24 || (uVar6 == 0x2c)))) {
          pbVar8[iVar3] = bVar1;
        }
        else {
          uVar6 = uVar6 & DAT_0019262c;
          pbVar8[iVar3] = 0x25;
          if (bVar1 >> 4 < 10) {
            cVar4 = '0';
          }
          else {
            cVar4 = '7';
          }
          pbVar8[iVar3 + 1] = cVar4 + (bVar1 >> 4);
          pbVar8 = pbVar8 + 2;
          if (uVar6 < 10) {
            cVar4 = '0';
          }
          else {
            cVar4 = '7';
          }
          pbVar8[iVar3] = cVar4 + (char)uVar6;
        }
        pbVar8 = pbVar8 + 1;
        iVar2 = iVar3;
        local_24 = local_28;
      }
    }
    if (param_1[10] == (byte *)0x0) {
      if (param_1[7] == (byte *)0x0) {
LAB_00192550:
        if (param_1[8] != (byte *)0x0) {
          if ((int)unaff_r7 <= (int)(pbVar8 + 3)) {
            unaff_r7 = (code **)((int)unaff_r7 * 2);
            iVar2 = (***(code ***)(pcVar7 + (int)DAT_00192630))(iVar2,(int)unaff_r7 + 1);
            if (iVar2 == 0) {
              iVar2 = FUN_00191d9c();
            }
          }
          pbVar8[iVar2] = 0x23;
          pbVar9 = DAT_00192630;
          pbVar10 = pbVar8;
          pbVar5 = param_1[8];
          while( true ) {
            local_20 = pbVar5 + 1;
            pbVar8 = pbVar10 + 1;
            if (*pbVar5 == 0) break;
            if ((int)unaff_r7 <= (int)(pbVar10 + 4)) {
              unaff_r7 = (code **)((int)unaff_r7 * 2);
              iVar2 = (***(code ***)(pcVar7 + (int)pbVar9))(iVar2,(int)unaff_r7 + 1);
              if (iVar2 == 0) {
                iVar2 = FUN_00191d9c();
              }
            }
            bVar1 = *pbVar5;
            uVar6 = (uint)bVar1;
            pbVar5 = local_20;
            if ((((((((uVar6 - 0x41 & 0xff) < 0x1a) || ((uVar6 - 0x61 & 0xff) < 0x1a)) ||
                   (((uVar6 - 0x30 & 0xff) < 10 ||
                    (((uVar6 == 0x5f || (uVar6 == 0x2d)) || (uVar6 == 0x2e)))))) ||
                  ((uVar6 == 0x21 || (uVar6 == 0x7e)))) || (uVar6 == 0x2a)) ||
                (((uVar6 == 0x27 || (uVar6 == 0x28)) ||
                 ((uVar6 == 0x29 ||
                  (((((uVar6 == 0x2f || (uVar6 == 0x3b)) || (uVar6 == 0x3f)) ||
                    ((uVar6 == 0x3a || (uVar6 == 0x40)))) || (uVar6 == 0x26)))))))) ||
               (((uVar6 == 0x3d || (uVar6 == 0x2b)) ||
                ((uVar6 == 0x24 || (((uVar6 == 0x2c || (uVar6 == 0x5b)) || (uVar6 == 0x5d)))))))) {
              pbVar8[iVar2] = bVar1;
              pbVar10 = pbVar8;
            }
            else {
              uVar6 = uVar6 & DAT_001926b4;
              pbVar8[iVar2] = 0x25;
              if (bVar1 >> 4 < 10) {
                cVar4 = '0';
              }
              else {
                cVar4 = '7';
              }
              pbVar10[iVar2 + 2] = cVar4 + (bVar1 >> 4);
              pbVar10 = pbVar10 + 3;
              if (uVar6 < 10) {
                cVar4 = '0';
              }
              else {
                cVar4 = '7';
              }
              pbVar10[iVar2] = cVar4 + (char)uVar6;
            }
          }
        }
        if (((int)unaff_r7 <= (int)pbVar8) &&
           (iVar2 = (***(code ***)(pcVar7 + DAT_001926b8))(iVar2,(int)unaff_r7 * 2 + 1), iVar2 == 0)
           ) {
          iVar2 = FUN_00191d9c();
        }
        pbVar8[iVar2] = 0;
        return iVar2;
      }
      iVar3 = iVar2;
      if ((int)unaff_r7 <= (int)(pbVar8 + 3)) {
        unaff_r7 = (code **)((int)unaff_r7 * 2);
        iVar3 = (***(code ***)(pcVar7 + (int)DAT_00192630))(iVar2,(int)unaff_r7 + 1);
        if (iVar3 == 0) goto code_r0x00191d9c;
      }
      pbVar8[iVar3] = 0x3f;
      pbVar5 = DAT_00192630;
      local_24 = param_1[7];
      iVar2 = iVar3;
      pbVar9 = pbVar8;
LAB_00192544:
      local_28 = local_24 + 1;
      pbVar8 = pbVar9 + 1;
      if (*local_24 == 0) goto LAB_00192550;
      iVar3 = iVar2;
      if ((int)unaff_r7 <= (int)(pbVar9 + 4)) {
        unaff_r7 = (code **)((int)unaff_r7 * 2);
        iVar3 = (***(code ***)(pcVar7 + (int)pbVar5))(iVar2,(int)unaff_r7 + 1);
        if (iVar3 == 0) goto code_r0x00191d9c;
      }
      bVar1 = *local_24;
      uVar6 = (uint)bVar1;
      iVar2 = iVar3;
      local_24 = local_28;
      if (((((((uVar6 - 0x41 & 0xff) < 0x1a) || ((uVar6 - 0x61 & 0xff) < 0x1a)) ||
            ((uVar6 - 0x30 & 0xff) < 10)) ||
           (((uVar6 == 0x5f || (uVar6 == 0x2d)) ||
            ((uVar6 == 0x2e || ((uVar6 == 0x21 || (uVar6 == 0x7e)))))))) ||
          (((uVar6 == 0x2a ||
            ((((uVar6 == 0x27 || (uVar6 == 0x28)) || (uVar6 == 0x29)) ||
             ((uVar6 == 0x2f || (uVar6 == 0x3b)))))) ||
           (((uVar6 == 0x3f || ((uVar6 == 0x3a || (uVar6 == 0x40)))) || (uVar6 == 0x26)))))) ||
         (((((uVar6 == 0x3d || (uVar6 == 0x2b)) || (uVar6 == 0x24)) ||
           ((uVar6 == 0x2c || (uVar6 == 0x5b)))) || (uVar6 == 0x5d)))) {
        pbVar8[iVar3] = bVar1;
        pbVar9 = pbVar8;
      }
      else {
        uVar6 = uVar6 & DAT_0019262c;
        pbVar8[iVar3] = 0x25;
        if (bVar1 >> 4 < 10) {
          cVar4 = '0';
        }
        else {
          cVar4 = '7';
        }
        pbVar9[iVar3 + 2] = cVar4 + (bVar1 >> 4);
        pbVar9 = pbVar9 + 3;
        if (uVar6 < 10) {
          cVar4 = '0';
        }
        else {
          cVar4 = '7';
        }
        pbVar9[iVar3] = cVar4 + (char)uVar6;
      }
      goto LAB_00192544;
    }
    local_28 = pbVar8 + 1;
    iVar3 = iVar2;
    if ((int)unaff_r7 <= (int)local_28) {
      unaff_r7 = (code **)((int)unaff_r7 * 2);
      iVar3 = (***(code ***)(pcVar7 + (int)DAT_00192630))(iVar2,(int)unaff_r7 + 1);
      if (iVar3 == 0) {
code_r0x00191d9c:
        do {
          unaff_r6 = DAT_00192010;
          (***(code ***)(pcVar7 + DAT_00192004))
                    (**(undefined4 **)(pcVar7 + DAT_00192008),pcVar7 + DAT_0019200c);
          unaff_r7 = *(code ***)(pcVar7 + unaff_r6);
          pcVar7 = *unaff_r7;
          (*pcVar7)(iVar2);
LAB_00191db8:
          iVar3 = FUN_001926ac();
          do {
            do {
              *(byte *)(iVar3 + unaff_r6) = local_28[unaff_r6];
              unaff_r6 = unaff_r6 + 1;
              iVar2 = iVar3;
LAB_00191dc8:
              if (local_28[unaff_r6] == 0) {
                iVar3 = iVar2;
                if ((int)unaff_r7 <= unaff_r6) {
                  unaff_r7 = (code **)((int)unaff_r7 * 2);
                  iVar3 = (***(code ***)(pcVar7 + (int)DAT_00192000))(iVar2,(int)unaff_r7 + 1);
                  if (iVar3 == 0) goto code_r0x00191d9c;
                }
                *(undefined *)(iVar3 + unaff_r6) = 0x3a;
                pbVar8 = (byte *)(unaff_r6 + 1);
                iVar2 = iVar3;
                goto LAB_00191dee;
              }
              iVar3 = iVar2;
            } while (unaff_r6 < (int)unaff_r7);
            unaff_r7 = (code **)((int)unaff_r7 * 2);
            iVar3 = (***(code ***)(pcVar7 + (int)local_24))(iVar2,(int)unaff_r7 + 1);
          } while (iVar3 != 0);
        } while( true );
      }
    }
    pbVar8[iVar3] = 0x3f;
    pbVar5 = DAT_00192630;
    pbVar9 = param_1[10];
    local_24 = DAT_00192630;
    iVar2 = iVar3;
    do {
      pbVar8 = local_28;
      if (*pbVar9 == 0) goto LAB_00192550;
      local_28 = local_28 + 1;
      iVar3 = iVar2;
      if ((int)unaff_r7 <= (int)local_28) {
        unaff_r7 = (code **)((int)unaff_r7 * 2);
        iVar3 = (***(code ***)(pcVar7 + (int)pbVar5))(iVar2,(int)unaff_r7 + 1);
        if (iVar3 == 0) goto code_r0x00191d9c;
      }
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      local_28[iVar3 + -1] = bVar1;
      iVar2 = iVar3;
    } while( true );
  }
LAB_00192282:
  (***(code ***)(pcVar7 + DAT_001922cc))
            (**(undefined4 **)(pcVar7 + DAT_001922d0),pcVar7 + DAT_001922d4);
  iVar2 = FUN_001926ac();
  return iVar2;
}


