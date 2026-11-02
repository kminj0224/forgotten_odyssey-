/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d4824  Symbol: Lode_Cash_Item */

/* In_App_Layer::Lode_Cash_Item() */

void __thiscall In_App_Layer::Lode_Cash_Item(In_App_Layer *this)

{
  undefined4 uVar1;
  CCNode *pCVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  _ccColor4B local_7c;
  undefined local_7b;
  undefined local_7a;
  undefined local_79;
  CCPoint local_78;
  CCPoint local_74;
  int local_70;
  int local_6c;
  CCPoint local_68;
  CCPoint local_64;
  int local_60;
  int local_5c;
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
  
  local_7c = (_ccColor4B)0x0;
  local_7b = 0;
  local_7a = 0;
  local_79 = 0xaa;
  uVar1 = cocos2d::CCLayerColor::layerWithColor(&local_7c);
  uVar7 = (**(code **)(*(int *)this + 0xcc))(this,uVar1,0,0);
  uVar7 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_78,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_70,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  uVar7 = vDrawFrame((CCNode *)this,(char *)(DAT_000d49f0 + 0xd4874),local_78,local_74,local_70,
                     local_6c);
  uVar7 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_68,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_60,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  uVar7 = vDrawFrame((CCNode *)this,(char *)(DAT_000d49f8 + 0xd48a4),local_68,local_64,local_60,
                     local_5c);
  uVar7 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_58,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_50,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  pcVar6 = (char *)(DAT_000d4a04 + 0xd48d4);
  uVar7 = vDrawFrame((CCNode *)this,pcVar6,local_58,local_54,local_50,local_4c);
  uVar7 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_48,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  vDrawFrame((CCNode *)this,pcVar6,local_48,local_44,local_40,local_3c);
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
  __mulsf3(*puVar4,0x3f000000);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
  iVar5 = (**(code **)(*piVar3 + 0x7c))();
  uVar7 = __mulsf3(*(undefined4 *)(iVar5 + 4),0x3f000000);
  uVar7 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_38,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  vDrawFrame(pCVar2,(char *)(DAT_000d4a0c + 0xd496c),local_38,local_34,local_30,local_2c);
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,4);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,4);
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
  __mulsf3(*puVar4,0x3f000000);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,4);
  iVar5 = (**(code **)(*piVar3 + 0x7c))();
  uVar7 = __mulsf3(*(undefined4 *)(iVar5 + 4),0x3f000000);
  uVar7 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_28,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  vDrawFrame(pCVar2,(char *)(DAT_000d4a10 + 0xd49d4),local_28,local_24,local_20,local_1c);
  *(undefined4 *)(this + 0x118) = 0;
  return;
}


