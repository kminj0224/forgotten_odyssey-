/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ab7a8  Symbol: FUN_001ab7a8 */

void FUN_001ab7a8(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  int *unaff_r4;
  uint uVar6;
  byte **unaff_r6;
  byte *unaff_r8;
  int unaff_r9;
  byte *unaff_r10;
  undefined4 unaff_r11;
  
  do {
    if (unaff_r8 == (byte *)0x0) {
      iVar2 = (*(code *)unaff_r6[3])(unaff_r4);
      if (iVar2 == 0) {
        FUN_001ab60e();
        return;
      }
      unaff_r10 = *unaff_r6;
      unaff_r8 = unaff_r6[1];
    }
    pbVar5 = unaff_r8 + -1;
    uVar6 = (uint)*unaff_r10;
    pbVar3 = unaff_r10 + 1;
    if (pbVar5 == (byte *)0x0) {
      iVar2 = (*(code *)unaff_r6[3])(unaff_r4);
      if (iVar2 == 0) {
        FUN_001ab60e();
        return;
      }
      pbVar3 = *unaff_r6;
      pbVar5 = unaff_r6[1];
    }
    unaff_r8 = pbVar5 + -1;
    bVar1 = *pbVar3;
    *(undefined4 *)(*unaff_r4 + 0x14) = unaff_r11;
    unaff_r10 = pbVar3 + 1;
    *(uint *)(*unaff_r4 + 0x18) = uVar6;
    *(uint *)(*unaff_r4 + 0x1c) = (uint)bVar1;
    unaff_r9 = unaff_r9 + -2;
    (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
    if (0x1f < uVar6) {
      FUN_001ac098();
    }
    if (0xf < uVar6) {
      FUN_001ac0aa();
    }
    uVar4 = bVar1 & 0xf;
    *(char *)((int)unaff_r4 + uVar6 + 0xe8) = (char)uVar4;
    *(byte *)((int)unaff_r4 + uVar6 + 0xf8) = bVar1 >> 4;
    if (bVar1 >> 4 < uVar4) {
      FUN_001ac108();
    }
    if (unaff_r9 < 1) {
      FUN_001ac0ba();
    }
  } while( true );
}


