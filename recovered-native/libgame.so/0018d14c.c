/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018d14c  Symbol: FUN_0018d14c */

uint FUN_0018d14c(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int local_1c [2];
  
  iVar9 = DAT_0018d3b4 + 0x18d158;
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  pcVar7 = param_1;
  if (param_2 != 0) {
    for (; ((cVar1 = *pcVar7, (byte)(cVar1 - 9U) < 2 || (cVar1 == ' ')) || (cVar1 == '\r'));
        pcVar7 = pcVar7 + 1) {
    }
  }
  cVar1 = *pcVar7;
  if ((((byte)(cVar1 + 0xbfU) < 0x1a) || ((byte)(cVar1 + 0x9fU) < 0x1a)) || (cVar1 == '_')) {
    do {
      do {
        pcVar7 = pcVar7 + 1;
        cVar1 = *pcVar7;
      } while ((byte)(cVar1 + 0xbfU) < 0x1a);
    } while ((((byte)(cVar1 + 0x9fU) < 0x1a) || ((byte)(cVar1 - 0x30U) < 10)) ||
            ((cVar1 == '_' || ((cVar1 == '-' || (cVar1 == '.'))))));
    if (param_2 != 0) {
      for (; ((cVar1 = *pcVar7, (byte)(cVar1 - 9U) < 2 || (cVar1 == ' ')) || (cVar1 == '\r'));
          pcVar7 = pcVar7 + 1) {
      }
    }
    if (*pcVar7 == '\0') {
      return 0;
    }
  }
  uVar4 = FUN_0017a970(0,param_1);
  if (param_2 == 0) {
    if ((int)uVar4 < 0x100) {
LAB_0018d23e:
      if (((uVar4 - 0x61 < 0x1a) || (uVar4 - 0x41 < 0x1a)) || (uVar4 - 0xc0 < 0x17)) {
        uVar8 = 0;
      }
      else {
        uVar8 = (uint)(uVar4 < 0xf8) - ((int)uVar4 >> 0x1f) & (uint)(0x1e < uVar4 - 0xd8);
      }
      goto LAB_0018d282;
    }
  }
  else {
    while ((int)uVar4 < 0x100) {
      if (((1 < uVar4 - 9) && (uVar4 != 0x20)) && (uVar4 != 0xd)) goto LAB_0018d23e;
      param_1 = param_1 + local_1c[0];
      uVar4 = FUN_0017a970(0,param_1);
    }
  }
  iVar5 = FUN_0019f630(uVar4,*(undefined4 *)(iVar9 + DAT_0018d3b8));
  uVar8 = (uint)(iVar5 == 0);
LAB_0018d282:
  if (uVar8 != 0) {
    if ((int)uVar4 < 0x100) {
      if (uVar4 != 0x5f) {
        return 1;
      }
    }
    else if (((DAT_0018d3c0 < uVar4 + DAT_0018d3bc) && (uVar4 != DAT_0018d3c4)) &&
            (8 < uVar4 + DAT_0018d3c8)) {
      return 1;
    }
  }
  param_1 = param_1 + local_1c[0];
  uVar4 = FUN_0017a970(0,param_1,local_1c);
  iVar3 = DAT_0018d3d0;
  iVar2 = DAT_0018d3cc;
  iVar5 = DAT_0018d3b8;
  do {
    if ((int)uVar4 < 0x100) {
      if ((0x19 < uVar4 - 0x61) &&
         ((((0x19 < uVar4 - 0x41 && (0x16 < uVar4 - 0xc0)) && (0x1e < uVar4 - 0xd8)) &&
          (((int)uVar4 < 0xf8 && (9 < uVar4 - 0x30)))))) {
LAB_0018d32a:
        if ((uVar4 != 0x2d) && ((uVar4 != 0x2e && (uVar4 != 0x5f)))) {
          if ((int)uVar4 < 0x100) {
            if (uVar4 != 0xb7) goto LAB_0018d34e;
          }
          else {
            iVar6 = FUN_0019f630(uVar4,*(undefined4 *)(iVar9 + iVar2));
            if ((iVar6 == 0) &&
               (iVar6 = FUN_0019f630(uVar4,*(undefined4 *)(iVar9 + iVar3)), iVar6 == 0)) {
LAB_0018d34e:
              if (param_2 != 0) {
                while( true ) {
                  if (0xff < (int)uVar4) {
                    return 1;
                  }
                  if (((1 < uVar4 - 9) && (uVar4 != 0x20)) && (uVar4 != 0xd)) break;
                  param_1 = param_1 + local_1c[0];
                  uVar4 = FUN_0017a970(0,param_1,local_1c);
                }
              }
              return (uint)(uVar4 != 0);
            }
          }
        }
      }
    }
    else {
      iVar6 = FUN_0019f630(uVar4,*(undefined4 *)(iVar9 + iVar5));
      if (((iVar6 == 0) && (DAT_0018d3c0 < uVar4 + DAT_0018d3bc)) &&
         ((uVar4 != DAT_0018d3c4 &&
          ((8 < uVar4 + DAT_0018d3c8 &&
           (iVar6 = FUN_0019f630(uVar4,*(undefined4 *)(iVar9 + DAT_0018d3d4)), iVar6 == 0))))))
      goto LAB_0018d32a;
    }
    param_1 = param_1 + local_1c[0];
    uVar4 = FUN_0017a970(0,param_1,local_1c);
  } while( true );
}


