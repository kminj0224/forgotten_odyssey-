/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013172c  Symbol: onEnter */

/* Ending_ani::onEnter() */

undefined8 Ending_ani::onEnter(void)

{
  bool bVar1;
  int *in_r0;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 in_r1;
  code *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  float in_s0;
  float in_s1;
  int *piStack_18;
  undefined4 uStack_14;
  
  pcVar4 = *(code **)(*in_r0 + 0x74);
  puVar6 = (undefined4 *)(DAT_001317c0 + 0x131740);
  piStack_18 = in_r0;
  uStack_14 = in_r1;
  cocos2d::CCPoint::CCPoint((CCPoint *)&piStack_18,in_s0,in_s1);
  (*pcVar4)(in_r0,&piStack_18);
  puVar6 = (undefined4 *)*puVar6;
  iVar5 = *in_r0;
  uVar2 = __divsf3(*puVar6,DAT_001317c4);
  (**(code **)(iVar5 + 0x2c))(in_r0,uVar2);
  uVar2 = __divsf3(puVar6[1],DAT_001317c8);
  (**(code **)(*in_r0 + 0x34))(in_r0,uVar2);
  in_r0[0x44] = 2;
  pcVar3 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::playBackgroundMusic(pcVar3,(bool)((char)DAT_001317cc + -0x7e));
  if (***(char ***)(DAT_001317d0 + 0x13178a) == '\0') {
    bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
  }
  strcpy(*(char **)(DAT_001317d4 + 0x1317a4),(char *)(DAT_001317d8 + 0x1317a6));
  Ani_Lode((Ending_ani *)in_r0);
  cocos2d::CCNode::scheduleUpdate((CCNode *)in_r0);
  cocos2d::CCLayer::onEnter((CCLayer *)in_r0);
  return CONCAT44(uStack_14,piStack_18);
}


