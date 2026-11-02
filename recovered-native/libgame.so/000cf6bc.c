/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cf6bc  Symbol: onEnter */

/* Equip_Layer::onEnter() */

void __thiscall Equip_Layer::onEnter(Equip_Layer *this)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_s0;
  undefined4 extraout_s1;
  undefined8 uVar3;
  CCPoint local_18;
  CCPoint local_14;
  int local_10;
  int local_c;
  
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  piVar1 = (int *)(**(code **)(*(int *)this + 0x90))(this);
  iVar2 = (**(code **)(*piVar1 + 0xa0))();
  uVar3 = CONCAT44(extraout_s1,extraout_s0);
  if (iVar2 != 0x19) {
    uVar3 = (**(code **)(*(int *)this + 0x114))(this,1);
  }
  *(undefined4 *)(this + 0x124) = 0xffffffff;
  uVar3 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_18,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_10,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  vDrawFrame((CCNode *)this,(char *)(DAT_000cf734 + 0xcf716),local_18,local_14,local_10,local_c);
  FileLode(this);
  return;
}


