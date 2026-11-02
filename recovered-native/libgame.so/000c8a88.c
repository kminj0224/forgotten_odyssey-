/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c8a88  Symbol: Server_Connect */

/* Server_Connect(char const*) */

void Server_Connect(char *param_1)

{
  int iVar1;
  hostent *phVar2;
  int iVar3;
  ssize_t sVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined2 auStack_4 [2];
  
  iVar1 = DAT_000c8be8;
  iVar7 = DAT_000c8be4 + 0xc8a94;
  puVar5 = *(undefined4 **)(iVar7 + DAT_000c8bec);
  *(undefined4 *)(&stack0xffffffec + DAT_000c8bf0 + DAT_000c8be8) = *puVar5;
  memcpy(&stack0x0000000c + DAT_000c8be8,(void *)(DAT_000c8bf4 + 0xc8aaa),0xd);
  memset(&stack0x00000019 + iVar1,0,7);
  phVar2 = gethostbyname(&stack0x0000000c + iVar1);
  *(undefined4 **)(&stack0xfffffff0 + iVar1) = puVar5;
  if (phVar2 == (hostent *)0x0) {
    FUN_001e8ba0(*(undefined4 *)(iVar7 + DAT_000c8bf8),DAT_000c8bfc + 0xc8ace);
    FUN_001e8620();
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  memcpy(&stack0x00000000 + iVar1,*phVar2->h_addr_list,phVar2->h_length);
  *(short *)((int)auStack_4 + iVar1 + 2) = (short)DAT_000c8c00;
  *(undefined2 *)((int)auStack_4 + iVar1) = 2;
  iVar3 = socket(2,1,0);
  piVar6 = *(int **)(iVar7 + DAT_000c8c04);
  *piVar6 = iVar3;
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    cocos2d::CCLog((char *)(DAT_000c8c08 + 0xc8b08));
  }
  iVar7 = connect(*piVar6,(sockaddr *)((int)auStack_4 + iVar1),0x10);
  if (iVar7 == -1) {
    close(*piVar6);
  }
  else {
    Net_Device_CHANNEL_ENTER(*piVar6,(uchar *)param_1);
    memset(&stack0x00000040 + iVar1,0,0x1000);
    memset(&stack0x00000020 + iVar1,0,0x1e);
    sVar4 = recv(*piVar6,&stack0x00000020 + iVar1,0x1d,0);
    if (sVar4 == -1) {
      Err();
    }
    Decrypt(&stack0x00000024 + iVar1,&stack0x00000024 + iVar1,sVar4 - 4);
    memcpy(&stack0x00000040 + iVar1,&stack0x0000002c + iVar1,sVar4 - 0xc);
    if (sVar4 != -1) {
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_000c8c0c + 0xc8b78),&stack0x00000040 + iVar1);
    }
    if (iVar7 < 0) {
      close(*piVar6);
    }
  }
  if (*(int *)(&stack0xffffffec + DAT_000c8bf0 + iVar1) != **(int **)(&stack0xfffffff0 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}


