/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00156e1c  Symbol: _INIT_119 */

void _INIT_119(float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  float extraout_s2;
  float extraout_s3;
  undefined auStack_14 [8];
  
  iVar1 = DAT_00156e70;
  iVar2 = DAT_00156e70 + 0x156e28;
  uVar3 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_00156e70 + 0x156e2c),param_1,param_2);
  uVar3 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x156e34),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x156e3c),(float)uVar3,(float)((ulonglong)uVar3 >> 0x20),extraout_s2
             ,extraout_s3);
  FUN_001eed40(iVar2,DAT_00156e74 + 0x156e56,auStack_14);
  FUN_00201240(iVar2,*(undefined4 *)(DAT_00156e78 + 0x156e62),
               *(undefined4 *)(DAT_00156e7c + 0x156e64));
  return;
}


