/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001306bc  Symbol: LodeSound */

/* Story_Layer::LodeSound() */

void Story_Layer::LodeSound(void)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char acStack_44 [40];
  int local_1c;
  
  iVar4 = DAT_00130748 + 0x1306c8;
  piVar6 = *(int **)(iVar4 + DAT_0013074c);
  local_1c = *piVar6;
  iVar5 = *(int *)(iVar4 + DAT_00130750);
  iVar3 = *(int *)(iVar5 + 0x24);
  if ((iVar3 == 0xff) || (iVar3 == -1)) {
    if (iVar3 != 0xff) goto LAB_00130736;
    bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
    CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::stopAllEffects();
  }
  else {
    sprintf(acStack_44,(char *)(DAT_00130758 + 0x1306e6),
            *(undefined4 *)(iVar3 * 4 + *(int *)(iVar4 + DAT_00130754)));
    pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playBackgroundMusic
              (pcVar2,(bool)((char)&stack0xffffffec + -0x30));
    if (***(char ***)(iVar4 + DAT_0013075c) == '\0') {
      bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
    }
    strcpy(*(char **)(iVar4 + DAT_00130760),acStack_44);
  }
  *(undefined4 *)(iVar5 + 0x24) = 0xffffffff;
LAB_00130736:
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


