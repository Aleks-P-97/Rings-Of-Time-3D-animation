#pragma once

#include <tyga/ActorDelegate.hpp>
#include <tyga/GraphicsCentre.hpp>
#include <vector>

class RingsOfTime : public tyga::ActorDelegate
{
public:

private:

    virtual void
    actorDidEnterWorld(std::shared_ptr<tyga::Actor> actor) override;

    virtual void
    actorWillLeaveWorld(std::shared_ptr<tyga::Actor> actor) override;

    virtual void
    actorClockTick(std::shared_ptr<tyga::Actor> actor) override;

    /*
     * Tutorial: These are the tyga actors necessary for the tutorial.
     *           You shouldn't need any further member variables until
     *           the more advanced tutorial activities.
     */

    std::shared_ptr<tyga::Actor> base_actor_;
    std::shared_ptr<tyga::Actor> stand1_actor_;
	std::shared_ptr<tyga::Actor> stand2_actor_;
	std::shared_ptr<tyga::Actor> stand3_actor_;
    std::shared_ptr<tyga::Actor> outer_actor1_;
	std::shared_ptr<tyga::Actor> outer_actor2_;
	std::shared_ptr<tyga::Actor> outer_actor3_;
    std::shared_ptr<tyga::Actor> middle_actor1_;
	std::shared_ptr<tyga::Actor> middle_actor2_;
	std::shared_ptr<tyga::Actor> middle_actor3_;
    std::shared_ptr<tyga::Actor> inner_actor1_;
	std::shared_ptr<tyga::Actor> inner_actor2_;
	std::shared_ptr<tyga::Actor> inner_actor3_;
	//std::vector<std::shared_ptr<tyga::Actor>> inner_actors_;
};
