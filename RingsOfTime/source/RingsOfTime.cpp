#include "RingsOfTime.hpp"
#include "MyUtils.hpp"
#include <tyga/ActorWorld.hpp>
#include <tyga/GraphicsCentre.hpp>
#include <tyga/Actor.hpp>
#include <tyga/BasicWorldClock.hpp>
#include <tyga/Math.hpp>

void RingsOfTime::
actorDidEnterWorld(std::shared_ptr<tyga::Actor> root_actor)
{
    auto world = tyga::ActorWorld::defaultWorld();
    auto graphics = tyga::GraphicsCentre::defaultCentre();

    /*
     * Tutorial: This section of code creates the base's mesh, material
     *           and model.  It doesn't need modifying.  Use it as an example
     *           when creating the other shapes.
     */


	 /* Base */
	auto base_material = graphics->newMaterial();
	base_material->colour = tyga::Vector3(1.f, 0.2f, 0.2f);

	auto base_mesh = graphics->newMeshWithIdentifier("rings.tcf/base");

	auto base_model = graphics->newModel();
	base_model->material = base_material;
	base_model->mesh = base_mesh;

	base_actor_ = std::make_shared<tyga::Actor>();
	base_actor_->attachComponent(base_model);
	world->addActor(base_actor_);


	/* Stands */

	//texture /color
	auto stand_material = graphics->newMaterial(); 
	stand_material->colour = tyga::Vector3(0.2f, 1.f, 0.2f);

	auto stand_mesh = graphics->newMeshWithIdentifier("rings.tcf/stand"); 

	//------------1st stand------------------
	//Combining everything 
	auto stand1_model = graphics->newModel();
	stand1_model->material = stand_material;
	stand1_model->mesh = stand_mesh;

	//Connecting the actor with the model
	stand1_actor_ = std::make_shared<tyga::Actor>();
	stand1_actor_->attachComponent(stand1_model);
	world->addActor(stand1_actor_);

	//------------2nd stand------------------
	//Combining everything 
	auto stand2_model = graphics->newModel();
	stand2_model->material = stand_material;
	stand2_model->mesh = stand_mesh;

	//Connecting the actor with the model
	stand2_actor_ = std::make_shared<tyga::Actor>();
	stand2_actor_->attachComponent(stand2_model);
	world->addActor(stand2_actor_);

	//------------3rd stand------------------
	//Combining everything
	auto stand3_model = graphics->newModel();
	stand3_model->material = stand_material;
	stand3_model->mesh = stand_mesh;

	//Connecting the actor with the model
	stand3_actor_ = std::make_shared<tyga::Actor>();
	stand3_actor_->attachComponent(stand3_model);
	world->addActor(stand3_actor_);


	/*Rings*/

	//--------------texture/color--------------
	auto ring_material = graphics->newMaterial();
	ring_material->colour = tyga::Vector3(1.0f, 1.0f, 0.0f);

	//3d meshes
	auto outer_ring_mesh = graphics->newMeshWithIdentifier("rings.tcf/outer");
	auto middle_ring_mesh = graphics->newMeshWithIdentifier("rings.tcf/middle");
	auto inner_ring_mesh = graphics->newMeshWithIdentifier("rings.tcf/inner");

	//--------------Outer Ring 1---------------
	//Combining everything
	auto outer_ring1_model = graphics->newModel();
	outer_ring1_model->material = ring_material;
	outer_ring1_model->mesh = outer_ring_mesh;

	//Connecting the actor with the model
	outer_actor1_ = std::make_shared<tyga::Actor>();
	outer_actor1_->attachComponent(outer_ring1_model);
	world->addActor(outer_actor1_);
	
	//--------------Outer Ring 2---------------
	//Combining everything 
	auto outer_ring2_model = graphics->newModel();
	outer_ring2_model->material = ring_material;
	outer_ring2_model->mesh = outer_ring_mesh;

	//Connecting the actor with the model
	outer_actor2_ = std::make_shared<tyga::Actor>();
	outer_actor2_->attachComponent(outer_ring2_model);
	world->addActor(outer_actor2_);

	//--------------Outer Ring 3---------------
	//Combining everything 
	auto outer_ring3_model = graphics->newModel();
	outer_ring3_model->material = ring_material;
	outer_ring3_model->mesh = outer_ring_mesh;

	//Connecting the actor with the model
	outer_actor3_ = std::make_shared<tyga::Actor>();
	outer_actor3_->attachComponent(outer_ring3_model);
	world->addActor(outer_actor3_);

	//--------------Middle Ring 1---------------
	//Combining everything 
	auto middle_ring1_model = graphics->newModel();
	middle_ring1_model->material = ring_material;
	middle_ring1_model->mesh = middle_ring_mesh;

	//Connecting the actor with the model
	middle_actor1_ = std::make_shared<tyga::Actor>();
	middle_actor1_->attachComponent(middle_ring1_model);
	world->addActor(middle_actor1_);

	//--------------Middle Ring 2---------------
	//Combining everything 
	auto middle_ring2_model = graphics->newModel();
	middle_ring2_model->material = ring_material;
	middle_ring2_model->mesh = middle_ring_mesh;

	//Connecting the actor with the model
	middle_actor2_ = std::make_shared<tyga::Actor>();
	middle_actor2_->attachComponent(middle_ring2_model);
	world->addActor(middle_actor2_);

	//--------------Middle Ring 3---------------
	//Combining everything 
	auto middle_ring3_model = graphics->newModel();
	middle_ring3_model->material = ring_material;
	middle_ring3_model->mesh = middle_ring_mesh;

	//Connecting the actor with the model
	middle_actor3_ = std::make_shared<tyga::Actor>();
	middle_actor3_->attachComponent(middle_ring3_model);
	world->addActor(middle_actor3_);

	//--------------Inner Ring 1---------------
	//Combining everything 
	auto inner_ring1_model = graphics->newModel();
	inner_ring1_model->material = ring_material;
	inner_ring1_model->mesh = inner_ring_mesh;

	//Connecting the actor with the model
	inner_actor1_= std::make_shared<tyga::Actor>();
	inner_actor1_->attachComponent(inner_ring1_model);
	world->addActor(inner_actor1_);
	
	//--------------Inner Ring 2---------------
	//Combining everything 
	auto inner_ring2_model = graphics->newModel();
	inner_ring2_model->material = ring_material;
	inner_ring2_model->mesh = inner_ring_mesh;

	//Connecting the actor with the model
	inner_actor2_ = std::make_shared<tyga::Actor>();
	inner_actor2_->attachComponent(inner_ring2_model);
	world->addActor(inner_actor2_);

	//--------------Inner Ring 3---------------
	//Combining everything 
	auto inner_ring3_model = graphics->newModel();
	inner_ring3_model->material = ring_material;
	inner_ring3_model->mesh = inner_ring_mesh;

	//Connecting the actor with the model
	inner_actor3_ = std::make_shared<tyga::Actor>();
	inner_actor3_->attachComponent(inner_ring3_model);
	world->addActor(inner_actor3_);
}

void RingsOfTime::
actorWillLeaveWorld(std::shared_ptr<tyga::Actor> actor)
{
}

void RingsOfTime::
actorClockTick(std::shared_ptr<tyga::Actor> actor)
{
    const float time = tyga::BasicWorldClock::CurrentTime();
    const float delta_time = tyga::BasicWorldClock::CurrentTickInterval();

    // the delegate's actor's transformation acts as the root of the hierarchy
    auto root_xform = actor->Transformation();

	//Base animation
    float base_x = aleks::continuous(-3.f, 0.1f, time); //angle of rotation
	auto base_xform = aleks::rotateY(base_x) * root_xform; 
    base_actor_->setTransformation(base_xform);

	/*Stand animation*/
	//The order in which everything is matters!
	auto stand1_x = aleks::rotateY(aleks::continuous(-1.f, 1.2f, time)) * root_xform;
	auto stand2_x = aleks::rotateY(aleks::continuous(-3.f, 1.2f, time)) * root_xform;
	auto stand3_x = aleks::rotateY(aleks::continuous(-5.f, 1.2f, time)) * root_xform;

	//stand 1
	auto stand1_xform = stand1_x * aleks::translate(8.0f, 0.3f, 0.0f) * base_xform;
	stand1_actor_->setTransformation(stand1_xform);

	//stand 2
	auto stand2_xform = stand2_x * aleks::translate(-4.0f, 0.3f, 7.0f) * base_xform;
	stand2_actor_->setTransformation(stand2_xform);

	//stand 3
	auto stand3_xform = stand3_x * aleks::translate(-4.0f, 0.3f, -7.0f) * base_xform;
	stand3_actor_->setTransformation(stand3_xform);


	/*Outer Rings animation*/
	float outer_x = aleks::continuous(-3.f, 1.2f, time); //angle of rotation
	auto outer_xform = aleks::rotateX(outer_x) * root_xform;

	//Outer ring 1
	auto outer_ring1_xform = outer_xform * stand1_x * aleks::translate(8.0f, 5.3f, 0.0f) * base_xform;
	outer_actor1_->setTransformation(outer_ring1_xform);

	//Outer ring 2
	auto outer_ring2_xform = outer_xform * stand2_x * aleks::translate(-4.0f, 5.3f, 7.0f) * base_xform;
	outer_actor2_->setTransformation(outer_ring2_xform);

	//Outer ring 3
	auto outer_ring3_xform = outer_xform * stand3_x * aleks::translate(-4.0f, 5.3f, -7.0f) * base_xform;
	outer_actor3_->setTransformation(outer_ring3_xform);

	/*Middle Rings animation*/
	float middle_x = aleks::continuous(-3.f, 1.2f, time); //angle of rotation
	auto middle_xform = aleks::rotateZ(middle_x) * root_xform;

	//Middle ring 1
	auto middle_ring1_xform = middle_xform * outer_xform * stand1_x * aleks::translate(8.0f, 5.3f, 0.0f) * base_xform;
	middle_actor1_->setTransformation(middle_ring1_xform);

	//Middle ring 2
	auto middle_ring2_xform = middle_xform * outer_xform * stand2_x * aleks::translate(-4.0f, 5.3f, 7.0f) * base_xform;
	middle_actor2_->setTransformation(middle_ring2_xform);

	//Middle ring 3
	auto middle_ring3_xform = middle_xform * outer_xform * stand3_x * aleks::translate(-4.0f, 5.3f, -7.0f) * base_xform;
	middle_actor3_->setTransformation(middle_ring3_xform);

	/*Inner Rings animation*/
	float inner_x = aleks::continuous(-3.f, 1.2f, time); //angle of rotation
	auto inner_xform = aleks::rotateX(inner_x) * root_xform;

	//Inner ring 1
	auto inner_ring1_xform = inner_xform * middle_xform * outer_xform * stand1_x * aleks::translate(8.0f, 5.3f, 0.0f) * base_xform;
	inner_actor1_->setTransformation(inner_ring1_xform);
	
	//Inner ring 2
	auto inner_ring2_xform = inner_xform * middle_xform * outer_xform * stand2_x * aleks::translate(-4.0f, 5.3f, 7.0f) * base_xform;
	inner_actor2_->setTransformation(inner_ring2_xform);

	//Inner ring 3
	auto inner_ring3_xform = inner_xform * middle_xform * outer_xform * stand3_x * aleks::translate(-4.0f, 5.3f, -7.0f) * base_xform;
	inner_actor3_->setTransformation(inner_ring3_xform);
}
