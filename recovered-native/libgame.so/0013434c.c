/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013434c  Symbol: FileLode2 */

/* New_Game_Event::FileLode2() */

void __thiscall New_Game_Event::FileLode2(New_Game_Event *this)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  CCSprite *pCVar4;
  undefined8 uVar5;
  CCPoint local_20;
  int local_1c;
  
  bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
  CocosDenshion::SimpleAudioEngine::sharedEngine();
  uVar5 = CocosDenshion::SimpleAudioEngine::stopAllEffects();
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
  vDrawScript_Lode((char *)(DAT_001343c4 + 0x134384),(char *)(DAT_001343c8 + 0x134388),
                   (CCNode *)this,local_20,local_1c,2,true,false);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xa8))();
  pCVar4 = (CCSprite *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
  ani_ani_test(pCVar4,*(_KG_Anit **)*puVar3);
  this[0x114] = (New_Game_Event)0x0;
  return;
}


