/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00133cf4  Symbol: onEnter */

/* MainOption::onEnter() */

void __thiscall MainOption::onEnter(MainOption *this)

{
  CCSpriteFrameCache *pCVar1;
  undefined4 uVar2;
  int *piVar3;
  CCNode *pCVar4;
  int iVar5;
  undefined4 *puVar6;
  char **ppcVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  _ccColor4B local_5c;
  undefined local_5b;
  undefined local_5a;
  undefined local_59;
  CCPoint local_58;
  CCPoint local_54;
  int local_50;
  int local_4c;
  CCPoint local_48;
  int local_44;
  CCPoint local_40;
  int local_3c;
  CCPoint local_38;
  int local_34;
  CCPoint local_30;
  int local_2c;
  CCPoint local_28;
  int local_24;
  CCPoint local_20;
  int local_1c;
  
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  (**(code **)(*(int *)this + 0x114))(this,1);
  puVar6 = (undefined4 *)(DAT_00133ed8 + 0x133d18);
  **(undefined **)(DAT_00133ed4 + 0x133d14) = 1;
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_00133edc + 0x133d22));
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_00133ee0 + 0x133d2e));
  puVar6 = (undefined4 *)*puVar6;
  __mulsf3(*puVar6,0x3f000000);
  uVar8 = __mulsf3(puVar6[1],0x3f000000);
  uVar8 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_58,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_50,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  uVar9 = 1;
  uVar10 = 1;
  vDrawFrame((CCNode *)this,(char *)(DAT_00133ee4 + 0x133d6c),local_58,local_54,local_50,local_4c);
  local_59 = 0x7f;
  local_5c = (_ccColor4B)0x0;
  local_5b = 0;
  local_5a = 0;
  uVar2 = cocos2d::CCLayerColor::layerWithColor(&local_5c);
  uVar8 = (**(code **)(*(int *)this + 0xcc))(this,uVar2,0,0,local_50,local_4c,uVar9,uVar10);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_48,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  puVar6 = (undefined4 *)(DAT_00133ef0 + 0x133db6);
  uVar8 = vDrawFrame((CCNode *)this,(char *)(DAT_00133ef4 + 0x133db0),local_48,local_44,2);
  ppcVar7 = (char **)*puVar6;
  if (**ppcVar7 != '\0') {
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,2);
    uVar8 = (**(code **)(*piVar3 + 0x6c))(piVar3,0);
  }
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  uVar8 = vDrawFrame((CCNode *)this,(char *)(DAT_00133efc + 0x133dea),local_40,local_3c,3);
  if ((*ppcVar7)[1] != '\0') {
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
    uVar8 = (**(code **)(*piVar3 + 0x6c))(piVar3,0);
  }
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  uVar8 = vDrawFrame((CCNode *)this,(char *)(DAT_00133f04 + 0x133e28),local_38,local_34,4);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  vDrawFrame((CCNode *)this,(char *)(DAT_00133f0c + 0x133e42),local_30,local_2c,5);
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,5);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,5);
  puVar6 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
  __mulsf3(*puVar6,0x3f000000);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,5);
  iVar5 = (**(code **)(*piVar3 + 0x7c))();
  uVar8 = __mulsf3(*(undefined4 *)(iVar5 + 4),0x3f000000);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  uVar8 = vDrawFrame(pCVar4,(char *)(DAT_00133f10 + 0x133ea2),local_28,local_24,6);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  vDrawFrame((CCNode *)this,(char *)(DAT_00133f14 + 0x133eba),local_20,local_1c,7);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,7);
  (**(code **)(*piVar3 + 0x6c))(piVar3,0);
  return;
}


