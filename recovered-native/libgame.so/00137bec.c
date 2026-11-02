/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137bec  Symbol: _INIT_74 */

longlong _INIT_74(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_00137c1c;
  uVar2 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_00137c1c + 0x137bf8),param_1,param_2);
  uVar2 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x137c00),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x137c08),(float)uVar2,(float)((ulonglong)uVar2 >> 0x20),extraout_s2
             ,extraout_s3);
  return (ulonglong)param_4 << 0x20;
}


