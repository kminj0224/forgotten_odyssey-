/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00202540  Symbol: FUN_00202540 */

byte ** FUN_00202540(uint param_1,byte **param_2,byte **param_3,byte **param_4)

{
  byte bVar1;
  byte **ppbVar2;
  byte **ppbVar3;
  uint uVar4;
  byte **local_1c [2];
  
  if (param_1 == 0x50) {
    local_1c[0] = (byte **)((uint)((int)param_3 + 3) & 0xfffffffc);
    ppbVar2 = local_1c[0] + 1;
    local_1c[0] = (byte **)*local_1c[0];
    goto LAB_002025dc;
  }
  switch(param_1 & 0xf) {
  case 0:
    goto LAB_0020259c;
  case 1:
    local_1c[0] = (byte **)0x0;
    uVar4 = 0;
    ppbVar3 = param_3;
    do {
      ppbVar2 = (byte **)((int)ppbVar3 + 1);
      bVar1 = *(byte *)ppbVar3;
      local_1c[0] = (byte **)((uint)local_1c[0] | (bVar1 & 0x7f) << (uVar4 & 0xff));
      uVar4 = uVar4 + 7;
      ppbVar3 = ppbVar2;
    } while ((bVar1 & 0x80) != 0);
    break;
  case 2:
    ppbVar2 = (byte **)((int)param_3 + 2);
    local_1c[0] = (byte **)(uint)*(ushort *)param_3;
    break;
  case 3:
    goto LAB_0020259c;
  case 4:
    goto LAB_002025e8;
  case 5:
  default:
switchD_00202560_caseD_d:
                    /* WARNING: Subroutine does not return */
    abort();
  case 6:
    goto switchD_00202560_caseD_d;
  case 7:
    goto switchD_00202560_caseD_d;
  case 8:
    goto switchD_00202560_caseD_d;
  case 9:
    ppbVar2 = (byte **)FUN_002024f4(param_3,local_1c);
    break;
  case 10:
    ppbVar2 = (byte **)((int)param_3 + 2);
    local_1c[0] = (byte **)(int)*(short *)param_3;
    break;
  case 0xb:
LAB_0020259c:
    local_1c[0] = (byte **)*param_3;
    ppbVar2 = param_3 + 1;
    break;
  case 0xc:
LAB_002025e8:
    local_1c[0] = (byte **)*param_3;
    ppbVar2 = param_3 + 2;
  }
  if (local_1c[0] != (byte **)0x0) {
    if ((param_1 & 0x70) == 0x10) {
      param_2 = param_3;
    }
    local_1c[0] = (byte **)((int)local_1c[0] + (int)param_2);
    if ((param_1 & 0x80) != 0) {
      local_1c[0] = (byte **)*local_1c[0];
    }
  }
LAB_002025dc:
  *param_4 = (byte *)local_1c[0];
  return ppbVar2;
}


