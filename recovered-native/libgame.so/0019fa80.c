/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019fa80  Symbol: FUN_0019fa80 */

undefined4 FUN_0019fa80(byte *param_1,int *param_2,byte *param_3,byte **param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  bool bVar12;
  
  iVar11 = DAT_0019fc84 + 0x19fa8c;
  pbVar9 = param_1 + *param_2;
  pbVar7 = param_3 + (int)*param_4;
  pbVar3 = param_1;
  pbVar10 = param_3;
  do {
    while( true ) {
      if ((pbVar9 <= pbVar3) || (pbVar7 <= pbVar10)) goto LAB_0019fc70;
      bVar6 = *pbVar10;
      uVar5 = (uint)bVar6;
      if (uVar5 != 0x3c) break;
      if ((int)pbVar9 - (int)pbVar3 < 4) goto LAB_0019fc70;
      *pbVar3 = 0x26;
      bVar6 = 0x6c;
LAB_0019fad2:
      pbVar8 = pbVar3 + 1;
      pbVar3[1] = bVar6;
      pbVar3 = pbVar3 + 2;
      bVar6 = 0x74;
LAB_0019fafa:
      pbVar8[1] = bVar6;
      pbVar3[1] = 0x3b;
      pbVar3 = pbVar3 + 2;
LAB_0019fb1c:
      pbVar10 = pbVar10 + 1;
    }
    if (uVar5 == 0x3e) {
      if (3 < (int)pbVar9 - (int)pbVar3) {
        *pbVar3 = 0x26;
        bVar6 = 0x67;
        goto LAB_0019fad2;
      }
      goto LAB_0019fc70;
    }
    if (uVar5 == 0x26) {
      if (4 < (int)pbVar9 - (int)pbVar3) {
        *pbVar3 = bVar6;
        pbVar3[1] = 0x61;
        pbVar8 = pbVar3 + 2;
        pbVar3[2] = 0x6d;
        bVar6 = 0x70;
        pbVar3 = pbVar3 + 3;
        goto LAB_0019fafa;
      }
      goto LAB_0019fc70;
    }
    if ((((uVar5 - 0x20 & 0xff) < 0x60) || (uVar5 == 10)) || (uVar5 == 9)) {
      *pbVar3 = bVar6;
      pbVar3 = pbVar3 + 1;
      goto LAB_0019fb1c;
    }
    if ((int)(uVar5 * 0x1000000) < 0) {
      if (9 < (int)pbVar9 - (int)pbVar3) {
        if (uVar5 < 0xc0) {
          uVar4 = 0x578;
        }
        else {
          uVar4 = DAT_0019fc9c;
          if (uVar5 < 0xe0) {
            if ((int)pbVar7 - (int)pbVar10 < 2) goto LAB_0019fc70;
            uVar5 = pbVar10[1] & 0x3f | (uVar5 & 0x1f) << 6;
            pbVar10 = pbVar10 + 2;
          }
          else if (uVar5 < 0xf0) {
            if ((int)pbVar7 - (int)pbVar10 < 3) goto LAB_0019fc70;
            pbVar8 = pbVar10 + 1;
            pbVar1 = pbVar10 + 2;
            pbVar10 = pbVar10 + 3;
            uVar5 = *pbVar1 & 0x3f | (*pbVar8 & 0x3f | (uVar5 & 0xf) << 6) << 6;
          }
          else {
            if (0xf7 < uVar5) goto LAB_0019fc08;
            if ((int)pbVar7 - (int)pbVar10 < 4) goto LAB_0019fc70;
            pbVar8 = pbVar10 + 1;
            pbVar1 = pbVar10 + 2;
            pbVar2 = pbVar10 + 3;
            pbVar10 = pbVar10 + 4;
            uVar5 = *pbVar2 & 0x3f |
                    (*pbVar1 & 0x3f | (*pbVar8 & 0x3f | (uVar5 & 7) << 6) << 6) << 6;
          }
          if (uVar5 < 0x100) {
            if ((uVar5 - 9 < 2) || (uVar5 == 0xd)) {
              bVar12 = false;
            }
            else {
              bVar12 = uVar5 < 0x20;
            }
          }
          else if ((DAT_0019fc8c < uVar5 + DAT_0019fc88) && (DAT_0019fc90 < uVar5 - 0x100)) {
            bVar12 = DAT_0019fc98 < uVar5 + DAT_0019fc94;
          }
          else {
            bVar12 = false;
          }
          if (!bVar12) goto LAB_0019fc30;
        }
LAB_0019fc08:
        FUN_0019fa0c(uVar4,0,0);
LAB_0019fc4e:
        *param_2 = (int)pbVar3 - (int)param_1;
        *param_4 = pbVar10 + (1 - (int)param_3);
        return 0xffffffff;
      }
LAB_0019fc70:
      *param_2 = (int)pbVar3 - (int)param_1;
      *param_4 = pbVar10 + -(int)param_3;
      return 0;
    }
    if (((1 < (uVar5 - 9 & 0xff)) && (uVar5 != 0xd)) && (uVar5 < 0x20)) {
      (***(code ***)(iVar11 + DAT_0019fca4))
                (**(undefined4 **)(iVar11 + DAT_0019fca0),iVar11 + DAT_0019fca8);
      goto LAB_0019fc4e;
    }
    if ((int)pbVar9 - (int)pbVar3 < 6) goto LAB_0019fc70;
    pbVar10 = pbVar10 + 1;
LAB_0019fc30:
    pbVar3 = (byte *)FUN_0019f848();
  } while( true );
}


