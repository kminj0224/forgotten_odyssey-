/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ab68a  Symbol: FUN_001ab68a */

void FUN_001ab68a(void)

{
  byte bVar1;
  int iVar2;
  int *unaff_r4;
  byte **unaff_r5;
  byte *unaff_r6;
  byte *pbVar3;
  int unaff_r7;
  byte *pbVar4;
  int in_stack_0000000c;
  int in_stack_00000014;
  int in_stack_00000134;
  
  bVar1 = *unaff_r6;
  pbVar4 = (byte *)(unaff_r7 + -1);
  pbVar3 = unaff_r6 + 1;
  if (pbVar4 == (byte *)0x0) {
    iVar2 = (*(code *)unaff_r5[3])(unaff_r4);
    if (iVar2 == 0) {
      if (in_stack_00000134 != **(int **)(in_stack_0000000c + in_stack_00000014)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(0);
      }
      return;
    }
    pbVar3 = *unaff_r5;
    pbVar4 = unaff_r5[1];
  }
  iVar2 = (uint)*pbVar3 + (uint)bVar1 * 0x100;
  *(undefined4 *)(*unaff_r4 + 0x14) = 0x54;
  *(int *)(*unaff_r4 + 0x18) = iVar2;
  (**(code **)(*unaff_r4 + 4))(unaff_r4,1);
  unaff_r4[0x46] = iVar2;
  *unaff_r5 = pbVar3 + 1;
  unaff_r5[1] = pbVar4 + -1;
  FUN_001ab588();
  return;
}


