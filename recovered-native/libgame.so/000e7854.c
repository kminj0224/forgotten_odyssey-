/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e7854  Symbol: init */

/* MarketLayer::init() */

undefined4 __thiscall MarketLayer::init(MarketLayer *this)

{
  bool bVar1;
  char *pcVar2;
  undefined4 uVar3;
  CCSpriteFrameCache *this_00;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined8 uVar8;
  CCPoint local_c0;
  CCPoint local_bc;
  int local_b8;
  int local_b4;
  CCPoint local_b0;
  CCPoint local_ac;
  int local_a8;
  int local_a4;
  CCPoint local_a0;
  CCPoint local_9c;
  int local_98;
  int local_94;
  CCPoint local_90;
  CCPoint local_8c;
  int local_88;
  int local_84;
  CCPoint local_80;
  CCPoint local_7c;
  int local_78;
  int local_74;
  CCPoint local_70;
  CCPoint local_6c;
  int local_68;
  int local_64;
  CCPoint local_60;
  CCPoint local_5c;
  int local_58;
  int local_54;
  CCPoint local_50;
  CCPoint local_4c;
  int local_48;
  int local_44;
  CCPoint local_40;
  CCPoint local_3c;
  int local_38;
  int local_34;
  CCPoint local_30;
  CCPoint local_2c;
  int local_28;
  int local_24;
  
  iVar5 = DAT_000e7b1c + 0xe7860;
  if (**(int **)(iVar5 + DAT_000e7b20) == 0) {
    **(int **)(iVar5 + DAT_000e7b20) = 1;
  }
  pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::playBackgroundMusic(pcVar2,(bool)((char)DAT_000e7b24 + 'x'));
  if (***(char ***)(iVar5 + DAT_000e7b28) == '\0') {
    bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
  }
  strcpy(*(char **)(iVar5 + DAT_000e7b2c),(char *)(DAT_000e7b30 + 0xe789a));
  (**(code **)(*(int *)this + 0x114))(this,1);
  iVar4 = *(int *)this;
  puVar6 = *(undefined4 **)(iVar5 + DAT_000e7b34);
  uVar3 = __divsf3(*puVar6,DAT_000e7b38);
  (**(code **)(iVar4 + 0x2c))(this,uVar3);
  uVar3 = __divsf3(puVar6[1],DAT_000e7b3c);
  (**(code **)(*(int *)this + 0x34))(this,uVar3);
  **(MarketLayer ***)(iVar5 + DAT_000e7b40) = this;
  *(undefined4 *)(this + 0x11c) = 0;
  this[0x120] = (MarketLayer)0x0;
  FileLoding_Layer();
  this_00 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(this_00,(char *)(DAT_000e7b44 + 0xe78f4));
  puVar6 = *(undefined4 **)(iVar5 + DAT_000e7b48);
  __mulsf3(*puVar6,0x3f000000);
  uVar8 = __mulsf3(puVar6[1],0x3f000000);
  uVar8 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_c0,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_b8,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  uVar8 = vDrawFrame((CCNode *)this,(char *)(DAT_000e7b4c + 0xe7936),local_c0,local_bc,local_b8,
                     local_b4);
  uVar8 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_b0,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_a8,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  uVar8 = vDrawFrame((CCNode *)this,(char *)(DAT_000e7b58 + 0xe796a),local_b0,local_ac,local_a8,
                     local_a4);
  uVar8 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_a0,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_98,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  uVar8 = vDrawFrame((CCNode *)this,(char *)(DAT_000e7b60 + 0xe799c),local_a0,local_9c,local_98,
                     local_94);
  uVar8 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_90,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_88,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  pcVar2 = (char *)(DAT_000e7b68 + 0xe79cc);
  uVar8 = vDrawFrame((CCNode *)this,pcVar2,local_90,local_8c,local_88,local_84);
  uVar8 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_80,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_78,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  uVar8 = vDrawFrame((CCNode *)this,pcVar2,local_80,local_7c,local_78,local_74);
  uVar8 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_70,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_68,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  uVar8 = vDrawFrame((CCNode *)this,(char *)(DAT_000e7b74 + 0xe7a32),local_70,local_6c,local_68,
                     local_64);
  uVar8 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_60,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_58,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  uVar8 = vDrawFrame((CCNode *)this,(char *)(DAT_000e7b7c + 0xe7a64),local_60,local_5c,local_58,
                     local_54);
  uVar8 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_50,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_48,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  uVar8 = vDrawFrame((CCNode *)this,(char *)(DAT_000e7b84 + 0xe7a98),local_50,local_4c,local_48,
                     local_44);
  uVar8 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_40,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  uVar8 = vDrawFrame((CCNode *)this,(char *)(DAT_000e7b8c + 0xe7aca),local_40,local_3c,local_38,
                     local_34);
  uVar8 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_30,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  fVar7 = (float)vDrawFrame((CCNode *)this,(char *)(DAT_000e7b98 + 0xe7afc),local_30,local_2c,
                            local_28,local_24);
  cocos2d::CCNode::schedule((CCNode *)this,*(_func_void_float **)(iVar5 + DAT_000e7b9c),fVar7);
  return 1;
}


