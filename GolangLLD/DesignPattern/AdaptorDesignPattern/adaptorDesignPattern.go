/*
- Adapator Pattern
- Unit Testing and Integration Test for the same bhi write karna hai
*/
package main

import "fmt"

type mobile interface {
	chargeAppleMobile()
}

type apple struct{}

func (a *apple) chargeAppleMobile() {
	fmt.Println("Charing Apple Mobile Online")
}

// Adaptee : Jo Changes ko adaptee karega
type android struct{}

func (a *android) chargeAndroidMobile() {
	fmt.Println("Charing Android Mobile Online")
}

// Adapter : To charge the android device
type androidAdapter struct {
	android *android // pointing to android
}

func (ad *androidAdapter) chargeAppleMobile() {
	ad.android.chargeAndroidMobile()
}

type client struct{}

func (c *client) chargeMobile(mob mobile) {
	mob.chargeAppleMobile()
}

func main() {
	apple := &apple{}
	client := &client{}
	client.chargeMobile(apple)

	// Extending Requirement from the Client
	android := &android{}
	androidAdapter := &androidAdapter{android: android}
	client.chargeMobile(androidAdapter)
	return
}
