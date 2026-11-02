/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00120a30  Symbol: onEnter */

/* Game_UI::onEnter() */

void __thiscall Game_UI::onEnter(Game_UI *this)

{
  CCSpriteFrameCache *pCVar1;
  char *pcVar2;
  CCSpriteFrame *pCVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  CCPoint aCStack_68 [8];
  CCPoint aCStack_60 [8];
  CCPoint local_58;
  CCPoint local_54;
  int local_50;
  int local_4c;
  CCPoint local_48;
  CCPoint local_44;
  int local_40;
  int local_3c;
  CCPoint local_38;
  CCPoint local_34;
  int local_30;
  int local_2c;
  CCPoint local_28;
  CCPoint local_24;
  int local_20;
  int local_1c;
  
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_00120c88 + 0x120a44));
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  pcVar2 = (char *)NameHD((char *)(DAT_00120c8c + 0x120a52));
  pCVar3 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(pCVar1,pcVar2);
  piVar4 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar3);
  iVar9 = *piVar4;
  pcVar7 = *(code **)(iVar9 + 0x3c);
  puVar8 = *(undefined4 **)(DAT_00120c90 + 0x120a72);
  __mulsf3(*puVar8,0x3f000000);
  iVar9 = (**(code **)(iVar9 + 0x7c))(piVar4);
  uVar11 = __mulsf3(*(undefined4 *)(iVar9 + 4),0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_68,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  (*pcVar7)(piVar4,aCStack_68);
  (**(code **)(*(int *)this + 0xcc))(this,piVar4,0,0);
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  pcVar2 = (char *)NameHD((char *)(DAT_00120c94 + 0x120aba));
  pCVar3 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(pCVar1,pcVar2);
  piVar5 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar3);
  pcVar7 = *(code **)(*piVar5 + 0x3c);
  __mulsf3(*puVar8,0x3f000000);
  iVar9 = (**(code **)(*piVar4 + 0x7c))(piVar4);
  uVar10 = *(undefined4 *)(iVar9 + 4);
  iVar9 = (**(code **)(*piVar5 + 0x7c))(piVar5);
  uVar6 = __mulsf3(*(undefined4 *)(iVar9 + 4),0x3f000000);
  uVar11 = __addsf3(uVar10,uVar6);
  cocos2d::CCPoint::CCPoint(aCStack_60,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  (*pcVar7)(piVar5,aCStack_60);
  (**(code **)(*(int *)this + 0xcc))(this,piVar5,1,1);
  pcVar2 = (char *)NameHD((char *)(DAT_00120c98 + 0x120b2c));
  iVar9 = (**(code **)(*piVar4 + 0x7c))(piVar4);
  uVar6 = *(undefined4 *)(iVar9 + 4);
  iVar9 = (**(code **)(*piVar5 + 0x7c))(piVar5);
  uVar11 = __addsf3(uVar6,*(undefined4 *)(iVar9 + 4));
  uVar11 = cocos2d::CCPoint::CCPoint
                     ((CCPoint *)&local_58,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_50,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  vDrawFrame((CCNode *)this,pcVar2,local_58,local_54,local_50,local_4c);
  pcVar2 = (char *)NameHD((char *)(DAT_00120c9c + 0x120b82));
  iVar9 = (**(code **)(*piVar4 + 0x7c))(piVar4);
  uVar6 = *(undefined4 *)(iVar9 + 4);
  iVar9 = (**(code **)(*piVar5 + 0x7c))(piVar5);
  uVar11 = __addsf3(uVar6,*(undefined4 *)(iVar9 + 4));
  uVar11 = cocos2d::CCPoint::CCPoint
                     ((CCPoint *)&local_48,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  vDrawFrame((CCNode *)this,pcVar2,local_48,local_44,local_40,local_3c);
  pcVar2 = (char *)NameHD((char *)(DAT_00120ca0 + 0x120bd8));
  iVar9 = (**(code **)(*piVar4 + 0x7c))(piVar4);
  uVar6 = *(undefined4 *)(iVar9 + 4);
  iVar9 = (**(code **)(*piVar5 + 0x7c))(piVar5);
  uVar11 = __addsf3(uVar6,*(undefined4 *)(iVar9 + 4));
  uVar11 = cocos2d::CCPoint::CCPoint
                     ((CCPoint *)&local_38,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  vDrawFrame((CCNode *)this,pcVar2,local_38,local_34,local_30,local_2c);
  pcVar2 = (char *)NameHD((char *)(DAT_00120ca4 + 0x120c2e));
  iVar9 = (**(code **)(*piVar4 + 0x7c))(piVar4);
  uVar6 = *(undefined4 *)(iVar9 + 4);
  iVar9 = (**(code **)(*piVar5 + 0x7c))(piVar5);
  uVar11 = __addsf3(uVar6,*(undefined4 *)(iVar9 + 4));
  uVar11 = cocos2d::CCPoint::CCPoint
                     ((CCPoint *)&local_28,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  vDrawFrame((CCNode *)this,pcVar2,local_28,local_24,local_20,local_1c);
  return;
}


