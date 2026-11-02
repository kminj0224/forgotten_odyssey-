/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000215dc  Symbol: FUN_000215dc */

byte ** FUN_000215dc(undefined4 param_1,uint param_2,byte **param_3,byte **param_4)

{
  byte bVar1;
  byte **ppbVar2;
  uint uVar3;
  byte **ppbVar4;
  byte **ppbVar5;
  byte **ppbVar6;
  
  if (param_2 == 0xff) {
    ppbVar2 = (byte **)0x0;
  }
  else {
    uVar3 = param_2 & 0x70;
    if (uVar3 == 0x20) {
      ppbVar2 = (byte **)_Unwind_GetTextRelBase();
    }
    else if (uVar3 < 0x21) {
      if ((uVar3 != 0) && (uVar3 != 0x10)) goto switchD_00021674_caseD_d;
LAB_0002164c:
      ppbVar2 = (byte **)0x0;
    }
    else if (uVar3 == 0x40) {
      ppbVar2 = (byte **)_Unwind_GetRegionStart();
    }
    else {
      if (uVar3 == 0x50) goto LAB_0002164c;
      if (uVar3 != 0x30) goto switchD_00021674_caseD_d;
      ppbVar2 = (byte **)_Unwind_GetDataRelBase();
    }
    if (param_2 == 0x50) {
      ppbVar4 = (byte **)((uint)((int)param_3 + 3) & 0xfffffffc);
      ppbVar6 = ppbVar4 + 1;
      ppbVar4 = (byte **)*ppbVar4;
      goto LAB_000217bc;
    }
  }
  switch(param_2 & 0xf) {
  case 0:
    goto LAB_00021750;
  case 1:
    ppbVar4 = (byte **)0x0;
    uVar3 = 0;
    ppbVar5 = param_3;
    do {
      ppbVar6 = (byte **)((int)ppbVar5 + 1);
      bVar1 = *(byte *)ppbVar5;
      ppbVar4 = (byte **)((uint)ppbVar4 | (bVar1 & 0x7f) << (uVar3 & 0xff));
      uVar3 = uVar3 + 7;
      ppbVar5 = ppbVar6;
    } while ((bVar1 & 0x80) != 0);
    break;
  case 2:
    ppbVar4 = (byte **)(uint)*(ushort *)param_3;
    goto LAB_00021748;
  case 3:
    goto LAB_00021750;
  case 4:
    goto LAB_00021774;
  case 5:
  default:
switchD_00021674_caseD_d:
                    /* WARNING: Subroutine does not return */
    abort();
  case 6:
    goto switchD_00021674_caseD_d;
  case 7:
    goto switchD_00021674_caseD_d;
  case 8:
    goto switchD_00021674_caseD_d;
  case 9:
    ppbVar4 = (byte **)0x0;
    uVar3 = 0;
    ppbVar5 = param_3;
    do {
      ppbVar6 = ppbVar5;
      bVar1 = *(byte *)ppbVar6;
      ppbVar4 = (byte **)((uint)ppbVar4 | (bVar1 & 0x7f) << (uVar3 & 0xff));
      uVar3 = uVar3 + 7;
      ppbVar5 = (byte **)((int)ppbVar6 + 1);
    } while ((bVar1 & 0x80) != 0);
    if ((uVar3 < 0x20) && ((bVar1 & 0x40) != 0)) {
      ppbVar4 = (byte **)((uint)ppbVar4 | -1 << (uVar3 & 0xff));
    }
    ppbVar6 = (byte **)((int)ppbVar6 + 1);
    break;
  case 10:
    ppbVar4 = (byte **)(int)*(short *)param_3;
LAB_00021748:
    ppbVar6 = (byte **)((int)param_3 + 2);
    break;
  case 0xb:
LAB_00021750:
    ppbVar4 = (byte **)*param_3;
    ppbVar6 = param_3 + 1;
    break;
  case 0xc:
LAB_00021774:
    ppbVar4 = (byte **)*param_3;
    ppbVar6 = param_3 + 2;
  }
  if (ppbVar4 != (byte **)0x0) {
    if ((param_2 & 0x70) == 0x10) {
      ppbVar2 = param_3;
    }
    ppbVar4 = (byte **)((int)ppbVar4 + (int)ppbVar2);
    if ((param_2 & 0x80) != 0) {
      ppbVar4 = (byte **)*ppbVar4;
    }
  }
LAB_000217bc:
  *param_4 = (byte *)ppbVar4;
  return ppbVar6;
}


