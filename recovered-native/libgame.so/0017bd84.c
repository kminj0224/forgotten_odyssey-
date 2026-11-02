/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017bd84  Symbol: FUN_0017bd84 */

uint FUN_0017bd84(undefined4 param_1,byte **param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  iVar7 = DAT_0017beac + 0x17bd90;
  if (param_2 == (byte **)0x0) {
    return 0;
  }
  pbVar4 = *param_2;
  if (pbVar4 == (byte *)0x0) {
    return 0;
  }
  if ((*pbVar4 != 0x26) || (pbVar4[1] != 0x23)) {
    FUN_0017b7fc(param_1,8,0);
    return 0;
  }
  uVar2 = (uint)pbVar4[2];
  pbVar6 = pbVar4 + 2;
  if (uVar2 == 0x78) {
    pbVar6 = pbVar4 + 3;
    uVar5 = 0;
    uVar8 = 0;
    bVar1 = pbVar4[3];
    while (uVar2 = (uint)bVar1, uVar2 != 0x3b) {
      if (9 < (uVar2 - 0x30 & 0xff)) {
        if ((uVar2 - 0x61 & 0xff) < 6) {
          uVar5 = (uVar5 * 0x10 + uVar2) - 0x57;
          goto LAB_0017be08;
        }
        if ((uVar2 - 0x41 & 0xff) < 6) {
          uVar5 = (uVar5 * 0x10 + uVar2) - 0x37;
          goto LAB_0017be08;
        }
        uVar3 = 6;
LAB_0017be38:
        FUN_0017b7fc(param_1,uVar3,0);
        uVar5 = 0;
        goto LAB_0017be5c;
      }
      uVar5 = (uVar5 * 0x10 + uVar2) - 0x30;
LAB_0017be08:
      if (DAT_0017beb0 < uVar5) {
        uVar8 = uVar5;
      }
      pbVar6 = pbVar6 + 1;
      bVar1 = *pbVar6;
    }
  }
  else {
    uVar5 = 0;
    uVar8 = 0;
    while (uVar2 != 0x3b) {
      if (9 < (uVar2 - 0x30 & 0xff)) {
        uVar3 = 7;
        goto LAB_0017be38;
      }
      uVar5 = (uVar5 * 10 + uVar2) - 0x30;
      uVar9 = uVar5;
      if (uVar5 <= DAT_0017beb0) {
        uVar9 = uVar8;
      }
      pbVar6 = pbVar6 + 1;
      uVar8 = uVar9;
      uVar2 = (uint)*pbVar6;
    }
  }
  pbVar6 = pbVar6 + 1;
LAB_0017be5c:
  *param_2 = pbVar6;
  if (uVar5 < 0x100) {
    if (((1 < uVar5 - 9) && (uVar5 != 0xd)) && (uVar5 < 0x20)) goto LAB_0017be98;
  }
  else if (((DAT_0017beb8 < uVar5 + DAT_0017beb4) && (DAT_0017bebc < uVar5 - 0x100)) &&
          (DAT_0017bec4 < uVar5 + DAT_0017bec0)) goto LAB_0017be98;
  if (uVar8 == 0) {
    return uVar5;
  }
LAB_0017be98:
  FUN_0017bd20(param_1,9,iVar7 + DAT_0017bec8);
  return 0;
}


