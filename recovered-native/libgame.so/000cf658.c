/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cf658  Symbol: reset */

/* Equip_Layer::reset() */

void __thiscall Equip_Layer::reset(Equip_Layer *this)

{
  undefined8 uVar1;
  CCPoint local_18;
  CCPoint local_14;
  int local_10;
  int local_c;
  
  uVar1 = (**(code **)(*(int *)this + 0xd4))(this,1);
  *(undefined4 *)(this + 0x124) = 0xffffffff;
  uVar1 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_18,(float)uVar1,(float)((ulonglong)uVar1 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_10,(float)uVar1,(float)((ulonglong)uVar1 >> 0x20));
  vDrawFrame((CCNode *)this,(char *)(DAT_000cf6b4 + 0xcf696),local_18,local_14,local_10,local_c);
  FileLode(this);
  return;
}


