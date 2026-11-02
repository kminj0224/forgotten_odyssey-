/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013097c  Symbol: onEnter */

/* Story_Layer::onEnter() */

void __thiscall Story_Layer::onEnter(Story_Layer *this)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  char acStack_3c [32];
  int local_1c;
  
  iVar6 = DAT_00130a54 + 0x130988;
  piVar5 = *(int **)(iVar6 + DAT_00130a58);
  local_1c = *piVar5;
  vInitScript();
  *(undefined4 *)(this + 0x140) = 0xffffffff;
  *(undefined4 *)(this + 0x128) = 0xffffffff;
  *(undefined4 *)(this + 300) = 0xffffffff;
  *(undefined4 *)(this + 0x130) = 0xffffffff;
  *(undefined4 *)(this + 0x134) = 0xffffffff;
  *(undefined4 *)(this + 0x138) = 0xffffffff;
  *(undefined4 *)(this + 0x13c) = 0xffffffff;
  this[0x144] = (Story_Layer)0x0;
  iVar1 = DAT_00130a5c;
  *(undefined4 *)(this + 0x148) = 0;
  puVar4 = *(undefined4 **)(iVar6 + iVar1);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[3] = 0xffffffff;
  puVar4[4] = 0xffffffff;
  puVar4[5] = 0xffffffff;
  puVar4[6] = 0xffffffff;
  puVar4[7] = 0xffffffff;
  puVar4[8] = 0xffffffff;
  puVar4[9] = 0xffffffff;
  (**(code **)(*(int *)this + 0x114))(this,1);
  *(undefined4 *)(this + 0x14c) = 0;
  puVar4 = *(undefined4 **)(iVar6 + DAT_00130a60);
  *(undefined *)((int)puVar4 + DAT_00130a64) = 0;
  bVar2 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar2);
  CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::stopAllEffects();
  FileLode(this);
  memset(acStack_3c,0,0x1e);
  sprintf(acStack_3c,(char *)(DAT_00130a70 + 0x130a12),**(int **)(iVar6 + DAT_00130a68) + 0x40,
          **(undefined4 **)(iVar6 + DAT_00130a74),**(undefined4 **)(iVar6 + DAT_00130a6c));
  uVar3 = LoadScript(acStack_3c);
  *puVar4 = uVar3;
  vFindScriptPos();
  Story_Call(this);
  cocos2d::CCNode::scheduleUpdate((CCNode *)this);
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


