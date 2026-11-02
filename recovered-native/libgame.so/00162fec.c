/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00162fec  Symbol: _INIT_147 */

longlong _INIT_147(float param_1,float param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float extraout_s2;
  float extraout_s3;
  
  iVar1 = DAT_00163038;
  uVar4 = cocos2d::CCPoint::CCPoint((CCPoint *)(DAT_00163038 + 0x163018),param_1,param_2);
  uVar4 = cocos2d::CCSize::CCSize
                    ((CCSize *)(iVar1 + 0x163020),(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  cocos2d::CCRect::CCRect
            ((CCRect *)(iVar1 + 0x163028),(float)uVar4,(float)((ulonglong)uVar4 >> 0x20),extraout_s2
             ,extraout_s3);
  iVar1 = *(int *)(DAT_0016303c + 0x163026);
  uVar2 = *(undefined4 *)(DAT_00163040 + 0x16302a);
  uVar3 = *(undefined4 *)(DAT_00163044 + 0x16302c);
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  FUN_00201240(iVar1,uVar2,uVar3);
  return (ulonglong)param_4 << 0x20;
}


