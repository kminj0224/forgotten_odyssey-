/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e5d24  Symbol: UI_Loding */

/* Market_Unit::UI_Loding() */

void __thiscall Market_Unit::UI_Loding(Market_Unit *this)

{
  int iVar1;
  CCSpriteFrameCache *this_00;
  undefined4 uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
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
  CCPoint local_20;
  CCPoint local_1c;
  int local_18;
  int local_14;
  
  this_00 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  iVar1 = DAT_000e5ee4;
  uVar4 = cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile
                    (this_00,(char *)(DAT_000e5ee0 + 0xe5d36));
  uVar4 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_80,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_78,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar4 = vDrawFrame((CCNode *)this,(char *)(DAT_000e5ef0 + 0xe5d5c),local_80,local_7c,local_78,
                     local_74);
  uVar4 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_70,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_68,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar4 = vDrawFrame((CCNode *)this,(char *)(DAT_000e5efc + 0xe5d8e),local_70,local_6c,local_68,
                     local_64);
  uVar4 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_60,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_58,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar4 = vDrawFrame((CCNode *)this,(char *)(DAT_000e5f00 + 0xe5dc0),local_60,local_5c,local_58,
                     local_54);
  uVar4 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_50,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_48,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar4 = vDrawFrame((CCNode *)this,(char *)(iVar1 + 0xe5dea),local_50,local_4c,local_48,local_44);
  uVar4 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_40,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar4 = vDrawFrame((CCNode *)this,(char *)(iVar1 + 0xe5dea),local_40,local_3c,local_38,local_34);
  uVar4 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_30,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar4 = vDrawFrame((CCNode *)this,(char *)(DAT_000e5f14 + 0xe5e54),local_30,local_2c,local_28,
                     local_24);
  uVar4 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_20,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar5 = 0xb;
  uVar6 = 0xb;
  vDrawFrame((CCNode *)this,(char *)(DAT_000e5f20 + 0xe5e86),local_20,local_1c,local_18,local_14);
  Set_Max_Lv();
  if (*(int *)(**(int **)(DAT_000e5f24 + 0xe5ea2) +
               (**(int **)(DAT_000e5f2c + 0xe5eaa) + DAT_000e5f28) * 4 + 4) == 0xb) {
    uVar2 = Tutorial_Layer::node();
    (**(code **)(*(int *)this + 0xcc))(this,uVar2,0x1f,0x1f,local_18,local_14,uVar5,uVar6);
  }
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,10);
  (**(code **)(*piVar3 + 0x6c))(piVar3,0);
  return;
}


