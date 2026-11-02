/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b2318  Symbol: FUN_001b2318 */

void FUN_001b2318(int param_1,uint param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x10);
  if (param_3 == 0) {
    *(undefined4 *)(**(int **)(param_1 + 0x78) + 0x14) = 0x29;
    (**(code **)**(undefined4 **)(param_1 + 0x78))();
  }
  if (*(int *)(param_1 + 0x6c) == 0) {
    uVar4 = param_3 + iVar6;
    uVar2 = (param_2 & (1 << (param_3 & 0xff)) - 1U) << (0x18 - uVar4 & 0xff) |
            *(uint *)(param_1 + 0xc);
    uVar5 = uVar4;
    if (7 < (int)uVar4) {
      do {
        while( true ) {
          uVar3 = uVar2;
          puVar1 = *(undefined **)(param_1 + 0x70);
          *puVar1 = (char)(uVar3 >> 0x10);
          *(undefined **)(param_1 + 0x70) = puVar1 + 1;
          iVar6 = *(int *)(param_1 + 0x74) + -1;
          *(int *)(param_1 + 0x74) = iVar6;
          if (iVar6 == 0) {
            FUN_001b223c(param_1);
          }
          if (((int)uVar3 >> 0x10 & 0xffU) == 0xff) break;
LAB_001b235c:
          uVar5 = uVar5 - 8;
          uVar2 = uVar3 << 8;
          if ((int)uVar5 < 8) goto LAB_001b23a8;
        }
        puVar1 = *(undefined **)(param_1 + 0x70);
        *puVar1 = 0;
        *(undefined **)(param_1 + 0x70) = puVar1 + 1;
        iVar6 = *(int *)(param_1 + 0x74) + -1;
        *(int *)(param_1 + 0x74) = iVar6;
        if (iVar6 != 0) goto LAB_001b235c;
        uVar5 = uVar5 - 8;
        FUN_001b223c(param_1);
        uVar2 = uVar3 << 8;
      } while (7 < (int)uVar5);
LAB_001b23a8:
      uVar2 = uVar3 << 8;
      uVar4 = uVar4 & 7;
    }
    *(uint *)(param_1 + 0xc) = uVar2;
    *(uint *)(param_1 + 0x10) = uVar4;
  }
  return;
}


