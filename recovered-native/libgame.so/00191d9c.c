/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00191d9c  Symbol: FUN_00191d9c */

/* WARNING: Removing unreachable block (ram,0x0019236e) */
/* WARNING: Removing unreachable block (ram,0x00191ea4) */
/* WARNING: Removing unreachable block (ram,0x00191fc6) */
/* WARNING: Removing unreachable block (ram,0x001921a0) */
/* WARNING: Removing unreachable block (ram,0x00192504) */
/* WARNING: Removing unreachable block (ram,0x0019263e) */

int FUN_00191d9c(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  byte *pbVar6;
  uint uVar7;
  int unaff_r4;
  code *unaff_r5;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  code **ppcVar11;
  byte *param_5;
  byte *param_6;
  int *param_7;
  
code_r0x00191d9c:
  do {
    iVar4 = DAT_00192010;
    (***(code ***)(unaff_r5 + DAT_00192004))
              (**(undefined4 **)(unaff_r5 + DAT_00192008),unaff_r5 + DAT_0019200c);
    ppcVar11 = *(code ***)(unaff_r5 + iVar4);
    unaff_r5 = *ppcVar11;
    (*unaff_r5)(unaff_r4);
    iVar2 = FUN_001926ac();
    do {
      do {
        unaff_r4 = iVar2;
        *(byte *)(unaff_r4 + iVar4) = param_5[iVar4];
        iVar2 = iVar4 + 1;
        if (param_5[iVar2] == 0) {
          iVar3 = unaff_r4;
          if ((int)ppcVar11 <= iVar2) {
            ppcVar11 = (code **)((int)ppcVar11 * 2);
            iVar3 = (***(code ***)(unaff_r5 + DAT_00192000))(unaff_r4,(int)ppcVar11 + 1);
            if (iVar3 == 0) goto code_r0x00191d9c;
          }
          unaff_r4 = iVar3;
          *(undefined *)(unaff_r4 + iVar2) = 0x3a;
          iVar2 = DAT_00192000;
          pbVar8 = (byte *)(iVar4 + 2);
          pbVar6 = (byte *)param_7[1];
          if ((byte *)param_7[1] != (byte *)0x0) goto LAB_00191ee4;
          if (param_7[3] != 0) {
            iVar2 = unaff_r4;
            if ((int)ppcVar11 <= iVar4 + 5) {
              ppcVar11 = (code **)((int)ppcVar11 * 2);
              iVar2 = (***(code ***)(unaff_r5 + DAT_00192000))(unaff_r4,(int)ppcVar11 + 1);
              if (iVar2 == 0) goto code_r0x00191d9c;
            }
            unaff_r4 = iVar2;
            pbVar8[unaff_r4] = 0x2f;
            *(undefined *)(unaff_r4 + iVar4 + 3) = 0x2f;
            iVar2 = DAT_00192000;
            pbVar8 = (byte *)(iVar4 + 4);
            param_6 = (byte *)param_7[4];
            if (param_6 != (byte *)0x0) goto LAB_00192026;
            goto LAB_00192056;
          }
          if (param_7[2] != 0) {
            iVar2 = unaff_r4;
            if ((int)ppcVar11 <= iVar4 + 5) {
              ppcVar11 = (code **)((int)ppcVar11 * 2);
              iVar2 = (***(code ***)(unaff_r5 + (int)DAT_001922bc))(unaff_r4,(int)ppcVar11 + 1);
              if (iVar2 == 0) goto code_r0x00191d9c;
            }
            pbVar8[iVar2] = 0x2f;
            *(undefined *)(iVar2 + iVar4 + 3) = 0x2f;
            pbVar6 = DAT_001922bc;
            pbVar8 = (byte *)(iVar4 + 4);
            param_6 = (byte *)param_7[2];
            unaff_r4 = iVar2;
            goto LAB_001921e0;
          }
          if (*param_7 == 0) goto LAB_0019221c;
          iVar2 = unaff_r4;
          if ((int)ppcVar11 <= iVar4 + 5) {
            ppcVar11 = (code **)((int)ppcVar11 * 2);
            iVar2 = (***(code ***)(unaff_r5 + (int)DAT_001922bc))(unaff_r4,(int)ppcVar11 + 1);
            if (iVar2 == 0) goto code_r0x00191d9c;
          }
          pbVar8[iVar2] = 0x2f;
          *(undefined *)(iVar2 + iVar4 + 3) = 0x2f;
          pbVar8 = (byte *)(iVar4 + 4);
          unaff_r4 = iVar2;
          goto LAB_0019221c;
        }
        iVar4 = iVar2;
        iVar2 = unaff_r4;
      } while (iVar2 < (int)ppcVar11);
      ppcVar11 = (code **)((int)ppcVar11 * 2);
      iVar2 = (***(code ***)(unaff_r5 + (int)param_6))(unaff_r4,(int)ppcVar11 + 1);
    } while (iVar2 != 0);
  } while( true );
LAB_00191ee4:
  param_6 = pbVar6;
  param_5 = param_6 + 1;
  if (*param_6 == 0) goto LAB_00192550;
  iVar4 = unaff_r4;
  if ((int)ppcVar11 <= (int)(pbVar8 + 3)) {
    ppcVar11 = (code **)((int)ppcVar11 * 2);
    iVar4 = (***(code ***)(unaff_r5 + iVar2))(unaff_r4,(int)ppcVar11 + 1);
    if (iVar4 == 0) goto code_r0x00191d9c;
  }
  bVar1 = *param_6;
  uVar7 = (uint)bVar1;
  if (((((uVar7 == 0x2f) || (uVar7 == 0x3b)) || (uVar7 == 0x3f)) ||
      (((uVar7 == 0x3a || (uVar7 == 0x40)) ||
       ((uVar7 == 0x26 || ((uVar7 == 0x3d || (uVar7 == 0x2b)))))))) ||
     (((((uVar7 == 0x24 ||
         ((((uVar7 == 0x2c || (uVar7 == 0x5b)) || (uVar7 == 0x5d)) ||
          (((uVar7 - 0x41 & 0xff) < 0x1a || ((uVar7 - 0x61 & 0xff) < 0x1a)))))) ||
        ((((uVar7 - 0x30 & 0xff) < 10 || ((uVar7 == 0x5f || (uVar7 == 0x2d)))) || (uVar7 == 0x2e))))
       || (((uVar7 == 0x21 || (uVar7 == 0x7e)) || (uVar7 == 0x2a)))) ||
      (((uVar7 == 0x27 || (uVar7 == 0x28)) || (uVar7 == 0x29)))))) {
    pbVar8[iVar4] = bVar1;
  }
  else {
    uVar7 = uVar7 & DAT_00192014;
    pbVar8[iVar4] = 0x25;
    if (bVar1 >> 4 < 10) {
      cVar5 = '0';
    }
    else {
      cVar5 = '7';
    }
    pbVar8[iVar4 + 1] = cVar5 + (bVar1 >> 4);
    pbVar8 = pbVar8 + 2;
    if (uVar7 < 10) {
      cVar5 = '0';
    }
    else {
      cVar5 = '7';
    }
    pbVar8[iVar4] = cVar5 + (char)uVar7;
  }
  pbVar8 = pbVar8 + 1;
  unaff_r4 = iVar4;
  pbVar6 = param_5;
  goto LAB_00191ee4;
LAB_00192026:
  param_5 = param_6 + 1;
  if (*param_6 == 0) goto LAB_00192036;
  iVar4 = unaff_r4;
  if ((int)ppcVar11 <= (int)(pbVar8 + 3)) {
    ppcVar11 = (code **)((int)ppcVar11 * 2);
    iVar4 = (***(code ***)(unaff_r5 + iVar2))(unaff_r4,(int)ppcVar11 + 1);
    if (iVar4 == 0) goto code_r0x00191d9c;
  }
  bVar1 = *param_6;
  uVar7 = (uint)bVar1;
  if (((((((uVar7 - 0x41 & 0xff) < 0x1a) || ((uVar7 - 0x61 & 0xff) < 0x1a)) ||
        (((uVar7 - 0x30 & 0xff) < 10 || (((uVar7 == 0x5f || (uVar7 == 0x2d)) || (uVar7 == 0x2e))))))
       || ((uVar7 == 0x21 || (uVar7 == 0x7e)))) ||
      ((uVar7 == 0x2a ||
       (((uVar7 == 0x27 || (uVar7 == 0x28)) ||
        ((uVar7 == 0x29 ||
         (((((uVar7 == 0x3b || (uVar7 == 0x3a)) || (uVar7 == 0x26)) ||
           ((uVar7 == 0x3d || (uVar7 == 0x2b)))) || (uVar7 == 0x24)))))))))) || (uVar7 == 0x2c)) {
    pbVar8[iVar4] = bVar1;
  }
  else {
    uVar7 = uVar7 & DAT_00192014;
    pbVar8[iVar4] = 0x25;
    if (bVar1 >> 4 < 10) {
      cVar5 = '0';
    }
    else {
      cVar5 = '7';
    }
    pbVar8[iVar4 + 1] = cVar5 + (bVar1 >> 4);
    pbVar8 = pbVar8 + 2;
    if (uVar7 < 10) {
      cVar5 = '0';
    }
    else {
      cVar5 = '7';
    }
    pbVar8[iVar4] = cVar5 + (char)uVar7;
  }
  pbVar8 = pbVar8 + 1;
  unaff_r4 = iVar4;
  param_6 = param_5;
  goto LAB_00192026;
LAB_00192036:
  iVar4 = unaff_r4;
  if ((int)ppcVar11 <= (int)(pbVar8 + 3)) {
    ppcVar11 = (code **)((int)ppcVar11 * 2);
    iVar4 = (***(code ***)(unaff_r5 + (int)DAT_001922bc))(unaff_r4,(int)ppcVar11 + 1);
    if (iVar4 == 0) goto code_r0x00191d9c;
  }
  pbVar8[iVar4] = 0x40;
  pbVar8 = pbVar8 + 1;
  unaff_r4 = iVar4;
LAB_00192056:
  pbVar6 = DAT_001922bc;
  param_5 = (byte *)param_7[3];
  param_6 = DAT_001922bc;
  while (*param_5 != 0) {
    iVar4 = unaff_r4;
    if ((int)ppcVar11 <= (int)pbVar8) {
      ppcVar11 = (code **)((int)ppcVar11 * 2);
      iVar4 = (***(code ***)(unaff_r5 + (int)pbVar6))(unaff_r4,(int)ppcVar11 + 1);
      if (iVar4 == 0) goto code_r0x00191d9c;
    }
    bVar1 = *param_5;
    param_5 = param_5 + 1;
    pbVar8[iVar4] = bVar1;
    pbVar8 = pbVar8 + 1;
    unaff_r4 = iVar4;
  }
  if (0 < param_7[5]) {
    iVar4 = unaff_r4;
    if ((int)ppcVar11 <= (int)(pbVar8 + 10)) {
      ppcVar11 = (code **)((int)ppcVar11 * 2);
      iVar4 = (***(code ***)(unaff_r5 + (int)DAT_001922bc))(unaff_r4,(int)ppcVar11 + 1);
      if (iVar4 == 0) goto code_r0x00191d9c;
    }
    iVar2 = snprintf((char *)(pbVar8 + iVar4),(int)ppcVar11 - (int)pbVar8,
                     (char *)(unaff_r5 + DAT_001922c0),param_7[5]);
    pbVar8 = pbVar8 + iVar2;
    unaff_r4 = iVar4;
  }
LAB_0019221c:
  pbVar6 = (byte *)param_7[6];
  if (pbVar6 == (byte *)0x0) {
    param_5 = (byte *)0x0;
  }
  else {
    param_6 = pbVar6;
    pbVar9 = DAT_001922bc;
    if ((*param_7 != 0) && (*pbVar6 == 0x2f)) {
      if ((((byte)(pbVar6[1] + 0xbf) < 0x1a) || ((byte)(pbVar6[1] + 0x9f) < 0x1a)) &&
         ((pbVar6[2] == 0x3a &&
          (iVar4 = FUN_0019c30c(*param_7,unaff_r5 + DAT_001922c8), pbVar9 = DAT_001922bc, iVar4 != 0
          )))) {
        if ((int)ppcVar11 <= (int)(pbVar8 + 3)) {
          ppcVar11 = (code **)((int)ppcVar11 * 2);
          unaff_r4 = (***(code ***)(unaff_r5 + (int)DAT_001922bc))(unaff_r4,(int)ppcVar11 + 1);
          if (unaff_r4 == 0) {
            (***(code ***)(unaff_r5 + DAT_001922cc))
                      (**(undefined4 **)(unaff_r5 + DAT_001922d0),unaff_r5 + DAT_001922d4);
            iVar4 = FUN_001926ac();
            return iVar4;
          }
        }
        pbVar8[unaff_r4] = *pbVar6;
        pbVar8[unaff_r4 + 1] = pbVar6[1];
        param_6 = pbVar6 + 3;
        pbVar8[unaff_r4 + 2] = pbVar6[2];
        pbVar8 = pbVar8 + 3;
        pbVar9 = DAT_001922bc;
      }
    }
    while (param_5 = param_6 + 1, *param_6 != 0) {
      iVar4 = unaff_r4;
      if ((int)ppcVar11 <= (int)(pbVar8 + 3)) {
        ppcVar11 = (code **)((int)ppcVar11 * 2);
        iVar4 = (***(code ***)(unaff_r5 + (int)pbVar9))(unaff_r4,(int)ppcVar11 + 1);
        if (iVar4 == 0) goto code_r0x00191d9c;
      }
      bVar1 = *param_6;
      uVar7 = (uint)bVar1;
      if ((((((((uVar7 - 0x41 & 0xff) < 0x1a) || ((uVar7 - 0x61 & 0xff) < 0x1a)) ||
             ((uVar7 - 0x30 & 0xff) < 10)) || ((uVar7 == 0x5f || (uVar7 == 0x2d)))) ||
           ((uVar7 == 0x2e || ((uVar7 == 0x21 || (uVar7 == 0x7e)))))) ||
          ((uVar7 == 0x2a ||
           ((((uVar7 == 0x27 || (uVar7 == 0x28)) || (uVar7 == 0x29)) ||
            (((uVar7 == 0x2f || (uVar7 == 0x3b)) ||
             ((uVar7 == 0x40 || ((uVar7 == 0x26 || (uVar7 == 0x3d)))))))))))) ||
         ((uVar7 == 0x2b || ((uVar7 == 0x24 || (uVar7 == 0x2c)))))) {
        pbVar8[iVar4] = bVar1;
      }
      else {
        uVar7 = uVar7 & DAT_0019262c;
        pbVar8[iVar4] = 0x25;
        if (bVar1 >> 4 < 10) {
          cVar5 = '0';
        }
        else {
          cVar5 = '7';
        }
        pbVar8[iVar4 + 1] = cVar5 + (bVar1 >> 4);
        pbVar8 = pbVar8 + 2;
        if (uVar7 < 10) {
          cVar5 = '0';
        }
        else {
          cVar5 = '7';
        }
        pbVar8[iVar4] = cVar5 + (char)uVar7;
      }
      pbVar8 = pbVar8 + 1;
      unaff_r4 = iVar4;
      param_6 = param_5;
    }
  }
  if (param_7[10] == 0) {
    if (param_7[7] == 0) {
LAB_00192550:
      if (param_7[8] != 0) {
        if ((int)ppcVar11 <= (int)(pbVar8 + 3)) {
          ppcVar11 = (code **)((int)ppcVar11 * 2);
          unaff_r4 = (***(code ***)(unaff_r5 + (int)DAT_00192630))(unaff_r4,(int)ppcVar11 + 1);
          if (unaff_r4 == 0) {
            unaff_r4 = FUN_00191d9c();
          }
        }
        pbVar8[unaff_r4] = 0x23;
        pbVar9 = DAT_00192630;
        pbVar10 = pbVar8;
        pbVar6 = (byte *)param_7[8];
        while( true ) {
          param_7 = (int *)(pbVar6 + 1);
          pbVar8 = pbVar10 + 1;
          if (*pbVar6 == 0) break;
          if ((int)ppcVar11 <= (int)(pbVar10 + 4)) {
            ppcVar11 = (code **)((int)ppcVar11 * 2);
            unaff_r4 = (***(code ***)(unaff_r5 + (int)pbVar9))(unaff_r4,(int)ppcVar11 + 1);
            if (unaff_r4 == 0) {
              unaff_r4 = FUN_00191d9c();
            }
          }
          bVar1 = *pbVar6;
          uVar7 = (uint)bVar1;
          pbVar6 = (byte *)param_7;
          if ((((((uVar7 - 0x41 & 0xff) < 0x1a) || ((uVar7 - 0x61 & 0xff) < 0x1a)) ||
               ((uVar7 - 0x30 & 0xff) < 10)) ||
              ((((((uVar7 == 0x5f || (uVar7 == 0x2d)) ||
                  ((uVar7 == 0x2e || ((uVar7 == 0x21 || (uVar7 == 0x7e)))))) || (uVar7 == 0x2a)) ||
                ((((uVar7 == 0x27 || (uVar7 == 0x28)) || (uVar7 == 0x29)) ||
                 ((uVar7 == 0x2f || (uVar7 == 0x3b)))))) ||
               ((uVar7 == 0x3f || ((uVar7 == 0x3a || (uVar7 == 0x40)))))))) ||
             ((uVar7 == 0x26 ||
              (((((uVar7 == 0x3d || (uVar7 == 0x2b)) || (uVar7 == 0x24)) ||
                ((uVar7 == 0x2c || (uVar7 == 0x5b)))) || (uVar7 == 0x5d)))))) {
            pbVar8[unaff_r4] = bVar1;
            pbVar10 = pbVar8;
          }
          else {
            uVar7 = uVar7 & DAT_001926b4;
            pbVar8[unaff_r4] = 0x25;
            if (bVar1 >> 4 < 10) {
              cVar5 = '0';
            }
            else {
              cVar5 = '7';
            }
            pbVar10[unaff_r4 + 2] = cVar5 + (bVar1 >> 4);
            pbVar10 = pbVar10 + 3;
            if (uVar7 < 10) {
              cVar5 = '0';
            }
            else {
              cVar5 = '7';
            }
            pbVar10[unaff_r4] = cVar5 + (char)uVar7;
          }
        }
      }
      if (((int)ppcVar11 <= (int)pbVar8) &&
         (unaff_r4 = (***(code ***)(unaff_r5 + DAT_001926b8))(unaff_r4,(int)ppcVar11 * 2 + 1),
         unaff_r4 == 0)) {
        unaff_r4 = FUN_00191d9c();
      }
      pbVar8[unaff_r4] = 0;
      return unaff_r4;
    }
    iVar4 = unaff_r4;
    if ((int)ppcVar11 <= (int)(pbVar8 + 3)) {
      ppcVar11 = (code **)((int)ppcVar11 * 2);
      iVar4 = (***(code ***)(unaff_r5 + (int)DAT_00192630))(unaff_r4,(int)ppcVar11 + 1);
      if (iVar4 == 0) goto code_r0x00191d9c;
    }
    pbVar8[iVar4] = 0x3f;
    pbVar6 = DAT_00192630;
    param_6 = (byte *)param_7[7];
    unaff_r4 = iVar4;
    pbVar9 = pbVar8;
LAB_00192544:
    param_5 = param_6 + 1;
    pbVar8 = pbVar9 + 1;
    if (*param_6 == 0) goto LAB_00192550;
    iVar4 = unaff_r4;
    if ((int)ppcVar11 <= (int)(pbVar9 + 4)) {
      ppcVar11 = (code **)((int)ppcVar11 * 2);
      iVar4 = (***(code ***)(unaff_r5 + (int)pbVar6))(unaff_r4,(int)ppcVar11 + 1);
      if (iVar4 == 0) goto code_r0x00191d9c;
    }
    bVar1 = *param_6;
    uVar7 = (uint)bVar1;
    unaff_r4 = iVar4;
    param_6 = param_5;
    if ((((((uVar7 - 0x41 & 0xff) < 0x1a) || ((uVar7 - 0x61 & 0xff) < 0x1a)) ||
         ((uVar7 - 0x30 & 0xff) < 10)) ||
        (((uVar7 == 0x5f || (uVar7 == 0x2d)) ||
         ((uVar7 == 0x2e || ((uVar7 == 0x21 || (uVar7 == 0x7e)))))))) ||
       (((uVar7 == 0x2a ||
         ((((((uVar7 == 0x27 || (uVar7 == 0x28)) || (uVar7 == 0x29)) ||
            ((uVar7 == 0x2f || (uVar7 == 0x3b)))) || (uVar7 == 0x3f)) ||
          ((uVar7 == 0x3a || (uVar7 == 0x40)))))) ||
        (((uVar7 == 0x26 || (((uVar7 == 0x3d || (uVar7 == 0x2b)) || (uVar7 == 0x24)))) ||
         (((uVar7 == 0x2c || (uVar7 == 0x5b)) || (uVar7 == 0x5d)))))))) {
      pbVar8[iVar4] = bVar1;
      pbVar9 = pbVar8;
    }
    else {
      uVar7 = uVar7 & DAT_0019262c;
      pbVar8[iVar4] = 0x25;
      if (bVar1 >> 4 < 10) {
        cVar5 = '0';
      }
      else {
        cVar5 = '7';
      }
      pbVar9[iVar4 + 2] = cVar5 + (bVar1 >> 4);
      pbVar9 = pbVar9 + 3;
      if (uVar7 < 10) {
        cVar5 = '0';
      }
      else {
        cVar5 = '7';
      }
      pbVar9[iVar4] = cVar5 + (char)uVar7;
    }
    goto LAB_00192544;
  }
  param_5 = pbVar8 + 1;
  iVar4 = unaff_r4;
  if ((int)ppcVar11 <= (int)param_5) {
    ppcVar11 = (code **)((int)ppcVar11 * 2);
    iVar4 = (***(code ***)(unaff_r5 + (int)DAT_00192630))(unaff_r4,(int)ppcVar11 + 1);
    if (iVar4 == 0) goto code_r0x00191d9c;
  }
  pbVar8[iVar4] = 0x3f;
  pbVar6 = DAT_00192630;
  pbVar9 = (byte *)param_7[10];
  param_6 = DAT_00192630;
  unaff_r4 = iVar4;
  do {
    pbVar8 = param_5;
    if (*pbVar9 == 0) goto LAB_00192550;
    param_5 = param_5 + 1;
    iVar4 = unaff_r4;
    if ((int)ppcVar11 <= (int)param_5) {
      ppcVar11 = (code **)((int)ppcVar11 * 2);
      iVar4 = (***(code ***)(unaff_r5 + (int)pbVar6))(unaff_r4,(int)ppcVar11 + 1);
      if (iVar4 == 0) goto code_r0x00191d9c;
    }
    bVar1 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    param_5[iVar4 + -1] = bVar1;
    unaff_r4 = iVar4;
  } while( true );
LAB_001921e0:
  param_5 = param_6 + 1;
  if (*param_6 == 0) goto LAB_0019221c;
  iVar4 = unaff_r4;
  if ((int)ppcVar11 <= (int)(pbVar8 + 3)) {
    ppcVar11 = (code **)((int)ppcVar11 * 2);
    iVar4 = (***(code ***)(unaff_r5 + (int)pbVar6))(unaff_r4,(int)ppcVar11 + 1);
    if (iVar4 == 0) goto code_r0x00191d9c;
  }
  bVar1 = *param_6;
  uVar7 = (uint)bVar1;
  if (((((((uVar7 - 0x41 & 0xff) < 0x1a) || ((uVar7 - 0x61 & 0xff) < 0x1a)) ||
        (((uVar7 - 0x30 & 0xff) < 10 || (((uVar7 == 0x5f || (uVar7 == 0x2d)) || (uVar7 == 0x2e))))))
       || ((((uVar7 == 0x21 || (uVar7 == 0x7e)) || (uVar7 == 0x2a)) ||
           ((uVar7 == 0x27 || (uVar7 == 0x28)))))) ||
      ((((uVar7 == 0x29 || (((uVar7 == 0x24 || (uVar7 == 0x2c)) || (uVar7 == 0x3b)))) ||
        ((uVar7 == 0x3a || (uVar7 == 0x40)))) || (uVar7 == 0x26)))) ||
     ((uVar7 == 0x3d || (uVar7 == 0x2b)))) {
    pbVar8[iVar4] = bVar1;
  }
  else {
    uVar7 = uVar7 & DAT_001922c4;
    pbVar8[iVar4] = 0x25;
    if (bVar1 >> 4 < 10) {
      cVar5 = '0';
    }
    else {
      cVar5 = '7';
    }
    pbVar8[iVar4 + 1] = cVar5 + (bVar1 >> 4);
    pbVar8 = pbVar8 + 2;
    if (uVar7 < 10) {
      cVar5 = '0';
    }
    else {
      cVar5 = '7';
    }
    pbVar8[iVar4] = cVar5 + (char)uVar7;
  }
  pbVar8 = pbVar8 + 1;
  unaff_r4 = iVar4;
  param_6 = param_5;
  goto LAB_001921e0;
}


