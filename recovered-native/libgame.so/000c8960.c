/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c8960  Symbol: Net_Device_CHANNEL_ENTER */

/* Net_Device_CHANNEL_ENTER(int, unsigned char*) */

void Net_Device_CHANNEL_ENTER(int param_1,uchar *param_2)

{
  int iVar1;
  int iVar2;
  ssize_t sVar3;
  int *piVar4;
  undefined4 uStack_4;
  
  iVar2 = DAT_000c8a24;
  iVar1 = DAT_000c8a18;
  piVar4 = *(int **)(DAT_000c8a20 + 0xc8974);
  *(int *)(&stack0xffffffec + DAT_000c8a1c + DAT_000c8a18) = *piVar4;
  memset(&stack0x00000000 + DAT_000c8a18,0,0x1000);
  memset(&stack0xffffffec + iVar2 + iVar1,0,0x1000);
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = 0;
  *(undefined4 *)((int)&uStack_4 + iVar1) = 0;
  memcpy(&stack0x00000000 + iVar1,param_2,9);
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = 0x19;
  *(undefined4 *)(&stack0xffffffec + DAT_000c8a24 + iVar1) = 0x19;
  *(undefined4 *)(&stack0xffffffec + DAT_000c8a28 + iVar1) =
       *(undefined4 *)(&stack0xfffffff8 + iVar1);
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = DAT_000c8a2c;
  *(undefined4 *)(&stack0xffffffec + DAT_000c8a30 + iVar1) = *(undefined4 *)((int)&uStack_4 + iVar1)
  ;
  *(undefined4 *)(&stack0x0000100c + iVar1) = DAT_000c8a2c;
  *(undefined4 *)(&stack0xffffffec + DAT_000c8a34 + iVar1) =
       *(undefined4 *)(&stack0x00000000 + iVar1);
  *(undefined4 *)(&stack0xffffffec + DAT_000c8a38 + iVar1) =
       *(undefined4 *)(&stack0x00000004 + iVar1);
  (&stack0xffffffec)[DAT_000c8a3c + iVar1] = (&stack0x00000008)[iVar1];
  Encrypt(&stack0xffffffec + DAT_000c8a28 + iVar1,&stack0xffffffec + DAT_000c8a28 + iVar1,0x15);
  do {
    sVar3 = write(param_1,&stack0xffffffec + iVar2 + iVar1,0x19);
  } while (sVar3 < 1);
  if (*(int *)(&stack0xffffffec + DAT_000c8a1c + iVar1) != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


