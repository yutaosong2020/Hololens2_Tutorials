﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"


// System.Collections.Generic.ICollection`1<UnityEngine.Transform>
struct ICollection_1_t97FB59C4204A4B5DF88469BCC976C8B4422B8A4F;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_t6331523A19E51FB87CA899920C03B10A48A562B0;
// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.XR.WindowsMR.WindowsMRRemotingConnector
struct WindowsMRRemotingConnector_tD55DC2052F64051DCFA6B587EB64F7EA4706E17E;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F;
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C;

struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Collections.IEnumerable>
struct NOVTABLE IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() = 0;
};

// System.Object


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4
struct U3CEnumerateHierarchyCoreU3Ed__4_t67ECAA6E328B8EFE39605E8D7B514919DE77FFA5  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<>2__current
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::root
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___root_3;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<>3__root
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CU3E3__root_4;
	// System.Collections.Generic.ICollection`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::ignore
	RuntimeObject* ___ignore_5;
	// System.Collections.Generic.ICollection`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<>3__ignore
	RuntimeObject* ___U3CU3E3__ignore_6;
	// System.Collections.Generic.Queue`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4::<transformQueue>5__2
	Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * ___U3CtransformQueueU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t67ECAA6E328B8EFE39605E8D7B514919DE77FFA5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t67ECAA6E328B8EFE39605E8D7B514919DE77FFA5, ___U3CU3E2__current_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t67ECAA6E328B8EFE39605E8D7B514919DE77FFA5, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_root_3() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t67ECAA6E328B8EFE39605E8D7B514919DE77FFA5, ___root_3)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_root_3() const { return ___root_3; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_root_3() { return &___root_3; }
	inline void set_root_3(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___root_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__root_4() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t67ECAA6E328B8EFE39605E8D7B514919DE77FFA5, ___U3CU3E3__root_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CU3E3__root_4() const { return ___U3CU3E3__root_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CU3E3__root_4() { return &___U3CU3E3__root_4; }
	inline void set_U3CU3E3__root_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CU3E3__root_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__root_4), (void*)value);
	}

	inline static int32_t get_offset_of_ignore_5() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t67ECAA6E328B8EFE39605E8D7B514919DE77FFA5, ___ignore_5)); }
	inline RuntimeObject* get_ignore_5() const { return ___ignore_5; }
	inline RuntimeObject** get_address_of_ignore_5() { return &___ignore_5; }
	inline void set_ignore_5(RuntimeObject* value)
	{
		___ignore_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ignore_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__ignore_6() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t67ECAA6E328B8EFE39605E8D7B514919DE77FFA5, ___U3CU3E3__ignore_6)); }
	inline RuntimeObject* get_U3CU3E3__ignore_6() const { return ___U3CU3E3__ignore_6; }
	inline RuntimeObject** get_address_of_U3CU3E3__ignore_6() { return &___U3CU3E3__ignore_6; }
	inline void set_U3CU3E3__ignore_6(RuntimeObject* value)
	{
		___U3CU3E3__ignore_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__ignore_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransformQueueU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t67ECAA6E328B8EFE39605E8D7B514919DE77FFA5, ___U3CtransformQueueU3E5__2_7)); }
	inline Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * get_U3CtransformQueueU3E5__2_7() const { return ___U3CtransformQueueU3E5__2_7; }
	inline Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 ** get_address_of_U3CtransformQueueU3E5__2_7() { return &___U3CtransformQueueU3E5__2_7; }
	inline void set_U3CtransformQueueU3E5__2_7(Queue_1_tF1B197AEB6333A56836D412CCD9B9658C6402177 * value)
	{
		___U3CtransformQueueU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransformQueueU3E5__2_7), (void*)value);
	}
};


// UnityEngine.XR.WindowsMR.WindowsMRRemotingConnector/<StartRemotingSession>d__4
struct U3CStartRemotingSessionU3Ed__4_tC7287BE14E1C5CCE886995E1FE308EF43F34D908  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.WindowsMR.WindowsMRRemotingConnector/<StartRemotingSession>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.WindowsMR.WindowsMRRemotingConnector/<StartRemotingSession>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.XR.WindowsMR.WindowsMRRemotingConnector UnityEngine.XR.WindowsMR.WindowsMRRemotingConnector/<StartRemotingSession>d__4::<>4__this
	WindowsMRRemotingConnector_tD55DC2052F64051DCFA6B587EB64F7EA4706E17E * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartRemotingSessionU3Ed__4_tC7287BE14E1C5CCE886995E1FE308EF43F34D908, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartRemotingSessionU3Ed__4_tC7287BE14E1C5CCE886995E1FE308EF43F34D908, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartRemotingSessionU3Ed__4_tC7287BE14E1C5CCE886995E1FE308EF43F34D908, ___U3CU3E4__this_2)); }
	inline WindowsMRRemotingConnector_tD55DC2052F64051DCFA6B587EB64F7EA4706E17E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsMRRemotingConnector_tD55DC2052F64051DCFA6B587EB64F7EA4706E17E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsMRRemotingConnector_tD55DC2052F64051DCFA6B587EB64F7EA4706E17E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.XR.WindowsMR.WindowsMRRemotingConnector/<TryConnect>d__5
struct U3CTryConnectU3Ed__5_tC9D5B641DE99F4D0B09B9E5A78D2B8E5125A122C  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.WindowsMR.WindowsMRRemotingConnector/<TryConnect>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.WindowsMR.WindowsMRRemotingConnector/<TryConnect>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.XR.WindowsMR.WindowsMRRemotingConnector UnityEngine.XR.WindowsMR.WindowsMRRemotingConnector/<TryConnect>d__5::<>4__this
	WindowsMRRemotingConnector_tD55DC2052F64051DCFA6B587EB64F7EA4706E17E * ___U3CU3E4__this_2;
	// System.Int32 UnityEngine.XR.WindowsMR.WindowsMRRemotingConnector/<TryConnect>d__5::<connectionTryCount>5__2
	int32_t ___U3CconnectionTryCountU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTryConnectU3Ed__5_tC9D5B641DE99F4D0B09B9E5A78D2B8E5125A122C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTryConnectU3Ed__5_tC9D5B641DE99F4D0B09B9E5A78D2B8E5125A122C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTryConnectU3Ed__5_tC9D5B641DE99F4D0B09B9E5A78D2B8E5125A122C, ___U3CU3E4__this_2)); }
	inline WindowsMRRemotingConnector_tD55DC2052F64051DCFA6B587EB64F7EA4706E17E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsMRRemotingConnector_tD55DC2052F64051DCFA6B587EB64F7EA4706E17E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsMRRemotingConnector_tD55DC2052F64051DCFA6B587EB64F7EA4706E17E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CconnectionTryCountU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CTryConnectU3Ed__5_tC9D5B641DE99F4D0B09B9E5A78D2B8E5125A122C, ___U3CconnectionTryCountU3E5__2_3)); }
	inline int32_t get_U3CconnectionTryCountU3E5__2_3() const { return ___U3CconnectionTryCountU3E5__2_3; }
	inline int32_t* get_address_of_U3CconnectionTryCountU3E5__2_3() { return &___U3CconnectionTryCountU3E5__2_3; }
	inline void set_U3CconnectionTryCountU3E5__2_3(int32_t value)
	{
		___U3CconnectionTryCountU3E5__2_3 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/InstructionWrappers/<ReturnVoid>d__0
struct U3CReturnVoidU3Ed__0_tBB535FF7B39935DB78A64D979C3AD227E9C51FD2  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/InstructionWrappers/<ReturnVoid>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/InstructionWrappers/<ReturnVoid>d__0::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/InstructionWrappers/<ReturnVoid>d__0::instruction
	RuntimeObject * ___instruction_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/InstructionWrappers/<ReturnVoid>d__0::awaiter
	SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C * ___awaiter_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReturnVoidU3Ed__0_tBB535FF7B39935DB78A64D979C3AD227E9C51FD2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CReturnVoidU3Ed__0_tBB535FF7B39935DB78A64D979C3AD227E9C51FD2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_instruction_2() { return static_cast<int32_t>(offsetof(U3CReturnVoidU3Ed__0_tBB535FF7B39935DB78A64D979C3AD227E9C51FD2, ___instruction_2)); }
	inline RuntimeObject * get_instruction_2() const { return ___instruction_2; }
	inline RuntimeObject ** get_address_of_instruction_2() { return &___instruction_2; }
	inline void set_instruction_2(RuntimeObject * value)
	{
		___instruction_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instruction_2), (void*)value);
	}

	inline static int32_t get_offset_of_awaiter_3() { return static_cast<int32_t>(offsetof(U3CReturnVoidU3Ed__0_tBB535FF7B39935DB78A64D979C3AD227E9C51FD2, ___awaiter_3)); }
	inline SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C * get_awaiter_3() const { return ___awaiter_3; }
	inline SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C ** get_address_of_awaiter_3() { return &___awaiter_3; }
	inline void set_awaiter_3(SimpleCoroutineAwaiter_t4AA6814C4F78287306C5EB72D1CCA88F2B8C587C * value)
	{
		___awaiter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___awaiter_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Management.XRLoader>
struct Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF, ___list_0)); }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * get_list_0() const { return ___list_0; }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF, ___current_3)); }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * get_current_3() const { return ___current_3; }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24
struct U3CInitializeLoaderU3Ed__24_tBE52372328AAFF3147B0E3361196652E33780D08  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::<>4__this
	XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24::<>7__wrap1
	Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF  ___U3CU3E7__wrap1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInitializeLoaderU3Ed__24_tBE52372328AAFF3147B0E3361196652E33780D08, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CInitializeLoaderU3Ed__24_tBE52372328AAFF3147B0E3361196652E33780D08, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CInitializeLoaderU3Ed__24_tBE52372328AAFF3147B0E3361196652E33780D08, ___U3CU3E4__this_2)); }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CInitializeLoaderU3Ed__24_tBE52372328AAFF3147B0E3361196652E33780D08, ___U3CU3E7__wrap1_3)); }
	inline Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF  get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF * get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(Enumerator_t5E925E051A8E0B9BEF75F1250A9B42E275E89FCF  value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_3))->___current_3), (void*)NULL);
		#endif
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(RuntimeObject* __this);



// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.TransformExtensions/<EnumerateHierarchyCore>d__4
struct U3CEnumerateHierarchyCoreU3Ed__4_t67ECAA6E328B8EFE39605E8D7B514919DE77FFA5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CEnumerateHierarchyCoreU3Ed__4_t67ECAA6E328B8EFE39605E8D7B514919DE77FFA5_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CEnumerateHierarchyCoreU3Ed__4_t67ECAA6E328B8EFE39605E8D7B514919DE77FFA5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CEnumerateHierarchyCoreU3Ed__4_t67ECAA6E328B8EFE39605E8D7B514919DE77FFA5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CEnumerateHierarchyCoreU3Ed__4_t67ECAA6E328B8EFE39605E8D7B514919DE77FFA5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CEnumerateHierarchyCoreU3Ed__4_t67ECAA6E328B8EFE39605E8D7B514919DE77FFA5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CEnumerateHierarchyCoreU3Ed__4_t67ECAA6E328B8EFE39605E8D7B514919DE77FFA5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.WindowsMR.WindowsMRRemotingConnector/<StartRemotingSession>d__4
struct U3CStartRemotingSessionU3Ed__4_tC7287BE14E1C5CCE886995E1FE308EF43F34D908_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CStartRemotingSessionU3Ed__4_tC7287BE14E1C5CCE886995E1FE308EF43F34D908_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CStartRemotingSessionU3Ed__4_tC7287BE14E1C5CCE886995E1FE308EF43F34D908_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CStartRemotingSessionU3Ed__4_tC7287BE14E1C5CCE886995E1FE308EF43F34D908_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CStartRemotingSessionU3Ed__4_tC7287BE14E1C5CCE886995E1FE308EF43F34D908(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CStartRemotingSessionU3Ed__4_tC7287BE14E1C5CCE886995E1FE308EF43F34D908_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CStartRemotingSessionU3Ed__4_tC7287BE14E1C5CCE886995E1FE308EF43F34D908_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.WindowsMR.WindowsMRRemotingConnector/<TryConnect>d__5
struct U3CTryConnectU3Ed__5_tC9D5B641DE99F4D0B09B9E5A78D2B8E5125A122C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CTryConnectU3Ed__5_tC9D5B641DE99F4D0B09B9E5A78D2B8E5125A122C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CTryConnectU3Ed__5_tC9D5B641DE99F4D0B09B9E5A78D2B8E5125A122C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CTryConnectU3Ed__5_tC9D5B641DE99F4D0B09B9E5A78D2B8E5125A122C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CTryConnectU3Ed__5_tC9D5B641DE99F4D0B09B9E5A78D2B8E5125A122C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CTryConnectU3Ed__5_tC9D5B641DE99F4D0B09B9E5A78D2B8E5125A122C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CTryConnectU3Ed__5_tC9D5B641DE99F4D0B09B9E5A78D2B8E5125A122C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.Management.XRManagerSettings/<InitializeLoader>d__24
struct U3CInitializeLoaderU3Ed__24_tBE52372328AAFF3147B0E3361196652E33780D08_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CInitializeLoaderU3Ed__24_tBE52372328AAFF3147B0E3361196652E33780D08_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CInitializeLoaderU3Ed__24_tBE52372328AAFF3147B0E3361196652E33780D08_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CInitializeLoaderU3Ed__24_tBE52372328AAFF3147B0E3361196652E33780D08_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CInitializeLoaderU3Ed__24_tBE52372328AAFF3147B0E3361196652E33780D08(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CInitializeLoaderU3Ed__24_tBE52372328AAFF3147B0E3361196652E33780D08_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CInitializeLoaderU3Ed__24_tBE52372328AAFF3147B0E3361196652E33780D08_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/InstructionWrappers/<ReturnVoid>d__0
struct U3CReturnVoidU3Ed__0_tBB535FF7B39935DB78A64D979C3AD227E9C51FD2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CReturnVoidU3Ed__0_tBB535FF7B39935DB78A64D979C3AD227E9C51FD2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CReturnVoidU3Ed__0_tBB535FF7B39935DB78A64D979C3AD227E9C51FD2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CReturnVoidU3Ed__0_tBB535FF7B39935DB78A64D979C3AD227E9C51FD2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CReturnVoidU3Ed__0_tBB535FF7B39935DB78A64D979C3AD227E9C51FD2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CReturnVoidU3Ed__0_tBB535FF7B39935DB78A64D979C3AD227E9C51FD2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CReturnVoidU3Ed__0_tBB535FF7B39935DB78A64D979C3AD227E9C51FD2_ComCallableWrapper(obj));
}
