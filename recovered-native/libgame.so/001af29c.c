/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001af29c  Symbol: FUN_001af29c */

int FUN_001af29c(int *param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar2 = param_1[1];
  iVar4 = DAT_001af3b0 + 0x1af2b4;
  if (DAT_001af3b4 < param_3) {
    FUN_001af0e8(param_1,1);
  }
  if ((param_3 & 7) != 0) {
    param_3 = (param_3 + 8) - (param_3 & 7);
  }
  if (1 < param_2) {
    *(undefined4 *)(*param_1 + 0x14) = 0xf;
    *(uint *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar1 = *(undefined4 **)((param_2 + 0xc) * 4 + iVar2 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    do {
      puVar6 = puVar1;
      uVar3 = puVar6[2];
      if (param_3 <= uVar3) {
LAB_001af2fc:
        iVar2 = puVar6[1];
        puVar6[1] = param_3 + iVar2;
        puVar6[2] = uVar3 - param_3;
        return (int)puVar6 + iVar2 + 0x10;
      }
      puVar1 = (undefined4 *)*puVar6;
    } while ((undefined4 *)*puVar6 != (undefined4 *)0x0);
    if (puVar6 != (undefined4 *)0x0) {
      uVar3 = *(uint *)(iVar4 + DAT_001af3b8 + param_2 * 4 + 8);
      puVar1 = puVar6;
      goto LAB_001af32e;
    }
  }
  uVar3 = *(uint *)(param_2 * 4 + iVar4 + DAT_001af3b8);
  puVar1 = puVar6;
LAB_001af32e:
  iVar4 = param_3 + 0x10;
  if ((uint)(DAT_001af3bc - iVar4) < uVar3) {
    uVar3 = DAT_001af3bc - iVar4;
  }
  do {
    iVar5 = uVar3 + iVar4;
    puVar6 = (undefined4 *)jpeg_get_small(param_1,iVar5);
    while( true ) {
      if (puVar6 != (undefined4 *)0x0) {
        *(int *)(iVar2 + 0x4c) = *(int *)(iVar2 + 0x4c) + iVar5;
        *puVar6 = 0;
        puVar6[1] = 0;
        uVar3 = uVar3 + param_3;
        puVar6[2] = uVar3;
        if (puVar1 == (undefined4 *)0x0) {
          *(undefined4 **)((param_2 + 0xc) * 4 + iVar2 + 4) = puVar6;
          uVar3 = puVar6[2];
        }
        else {
          *puVar1 = puVar6;
        }
        goto LAB_001af2fc;
      }
      uVar3 = uVar3 >> 1;
      if (0x31 < uVar3) break;
      FUN_001af0e8(param_1,2);
      iVar5 = uVar3 + iVar4;
      puVar6 = (undefined4 *)jpeg_get_small(param_1,iVar5);
    }
  } while( true );
}


