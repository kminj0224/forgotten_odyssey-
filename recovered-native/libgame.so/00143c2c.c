/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143c2c  Symbol: _INIT_88 */

longlong _INIT_88(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  CCPoolManager **ppCVar2;
  CCPoolManager *this;
  undefined8 uVar3;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_00143c7c;
  uVar3 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_00143c7c + 0x143c38),param_1,param_2);
  uVar3 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x143c40),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  ppCVar2 = (CCPoolManager **)(DAT_00143c80 + 0x143c5a);
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x143c48),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20),extraout_s2
             ,extraout_s3);
  this = *ppCVar2;
  cocos2d::CCPoolManager::CCPoolManager(this);
  FUN_00201240(this,*(undefined4 *)(DAT_00143c84 + 0x143c70),
               *(undefined4 *)(DAT_00143c88 + 0x143c72));
  return (ulonglong)param_4 << 0x20;
}


