using Unity.Advertisement.IosSupport.Components;
using UnityEngine;

namespace Unity.Advertisement.IosSupport.Samples
{
    /// <summary>
    /// This component will trigger the context screen to appear when the scene starts,
    /// if the user hasn't already responded to the iOS tracking dialog.
    /// </summary>
    public class ContextScreenManager : MonoBehaviour
    {
        /// <summary>

        void Start()
        {
#if UNITY_IOS
            var status = ATTrackingStatusBinding.GetAuthorizationTrackingStatus();

            // check with iOS to see if the user has accepted or declined tracking
            if (status == ATTrackingStatusBinding.AuthorizationTrackingStatus.NOT_DETERMINED)
            {
                ATTrackingStatusBinding.RequestAuthorizationTracking();
            }
#else
            Debug.Log("Unity iOS Support: App Tracking Transparency status not checked, because the platform is not iOS.");
#endif
        }
    }
}
